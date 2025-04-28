#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_ROWS 100
#define MAX_LENGTH 50

// Structure to hold DTC data
typedef struct {
    char ID[MAX_LENGTH];
    char Layout[MAX_LENGTH];
    char Name[MAX_LENGTH];
} DTCData;

// Function to convert a string to lowercase
void str_to_lower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Function to read the DTC CSV file
int read_dtc_csv(const char *filename, DTCData dtc_data[]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Unable to open DTC CSV file");
        return -1;
    }

    int count = 0;
    while (fgets(dtc_data[count].ID, MAX_LENGTH, file) != NULL) {
        // Remove newline character
        dtc_data[count].ID[strcspn(dtc_data[count].ID, "\n")] = 0;
        fgets(dtc_data[count].Layout, MAX_LENGTH, file);
        fgets(dtc_data[count].Name, MAX_LENGTH, file);
        // Remove newline character
        dtc_data[count].Layout[strcspn(dtc_data[count].Layout, "\n")] = 0;
        dtc_data[count].Name[strcspn(dtc_data[count].Name, "\n")] = 0;
        count++;
    }

    fclose(file);
    return count;
}

// Function to analyze the DTC message
void analyze_dtc(const char *dtc_string, DTCData dtc_data[], int dtc_count) {
    char dtc_id[MAX_LENGTH];
    char message[MAX_LENGTH];
    sscanf(dtc_string, "%[^:]:%s", dtc_id, message);
    str_to_lower(dtc_id);  // Convert ID to lowercase

    // Set values derived from the DTC message
    float results[MAX_ROWS];
    int result_count = 0;

    // Analyze each byte in the message
    char *token = strtok(message, " ");
    while (token != NULL) {
        int byte_value = (int)strtol(token, NULL, 16);  // Convert hex to int
        printf("Debug: Analyzing byte: %s (value: %d)\n", token, byte_value); // Debug statement
        for (int bit_index = 0; bit_index < 8; bit_index++) {
            if (byte_value & (1 << (7 - bit_index))) {  // If the bit is set
                results[result_count++] = (float)(1 << bit_index);  // Store the corresponding value
                printf("Debug: Set bit %d, result added: %.1f\n", bit_index, (float)(1 << bit_index)); // Debug statement
            }
        }
        token = strtok(NULL, " ");
    }

    // Display results
    printf("DTC Code ID: %s\n", dtc_id);
    printf("Set Values:\n");
    for (int i = 0; i < result_count; i++) {
        printf(" - %.1f\n", results[i]);
    }

    // Display corresponding names from dtc_data based on the layout values
    printf("\nCorresponding Names from DTC CSV:\n");
    for (int i = 0; i < dtc_count; i++) {
        char row_id[MAX_LENGTH];
        strcpy(row_id, dtc_data[i].ID);
        str_to_lower(row_id);  // Convert ID to lowercase

        printf("Debug: Checking ID: %s against DTC ID: %s\n", row_id, dtc_id); // Debug statement

        if (strcmp(row_id, dtc_id) == 0) {  // Check if ID matches
            char *layout_range = dtc_data[i].Layout;
            printf("Debug: Found matching ID: %s with Layout: %s\n", row_id, layout_range); // Debug statement
            if (strchr(layout_range, '-')) {  // Check if it's a range
                float min_value, max_value;
                sscanf(layout_range, "%f-%f", &min_value, &max_value);
                printf("Debug: Layout range: %.1f - %.1f\n", min_value, max_value); // Debug statement
                for (int j = 0; j < result_count; j++) {
                    if (results[j] >= min_value && results[j] <= max_value) {
                        printf(" - Name: %s\n", dtc_data[i].Name);
                    }
                }
            } else {  // If it's a single value
                float layout_value = atof(layout_range);
                printf("Debug: Single layout value: %.1f\n", layout_value); // Debug statement
                for (int j = 0; j < result_count; j++) {
                    if (results[j] == layout_value) {
                        printf(" - Name: %s\n", dtc_data[i].Name);
                    }
                }
            }
        }
    }
}

int main() {
    DTCData dtc_data[MAX_ROWS];
    int dtc_count = read_dtc_csv("dtc.csv", dtc_data);
    if (dtc_count < 0) {
        return 1;  // Error reading CSV
    }

    char user_input[MAX_LENGTH];
    printf("Enter the DTC string (e.g., '4CB:80 C0 00 00 00 00 00 27'): ");
    fgets(user_input, sizeof(user_input), stdin);
    user_input[strcspn(user_input, "\n")] = 0;  // Remove newline character

    analyze_dtc(user_input, dtc_data, dtc_count);
    getchar();
    return 0;
}