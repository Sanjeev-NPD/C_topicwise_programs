#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>

char last[3];

struct Stock_calculator
{
    int initialStocks;
    int additionalStocks;
    float initialPrice;
    float currentPrice;
    float desiredPrice;
    float totalCost;
    float requiredInvestment;
    float totalAmount;
} sc;

void calculator()
{
    // Taking inputs from the user
    printf("Enter the number of stocks you already own: ");
    scanf("%d", &sc.initialStocks);
    printf("Enter the price at which you bought the stocks: ");
    scanf("%f", &sc.initialPrice);
    printf("Enter the current stock price: ");
    scanf("%f", &sc.currentPrice);
    printf("Enter the desired average price: ");
    scanf("%f", &sc.desiredPrice);

    // Calculating total cost of existing stocks
    sc.totalCost = sc.initialStocks * sc.initialPrice;

    // Using the formula to calculate the additional stocks needed
    sc.additionalStocks = (sc.totalCost - (sc.desiredPrice * sc.initialStocks)) / (sc.desiredPrice - sc.currentPrice);

    // Total money required
    sc.totalAmount = sc.additionalStocks * sc.currentPrice;

    // Handling edge case when the price difference results in a fraction
    if (sc.additionalStocks < 0)
    {
        printf("You cannot reach the desired price with the given conditions.\n");
    }
    else
    {
        printf("You need to buy approximately %d additional stocks at Rs.%.2f whose cost will be RS.%.2f to achieve an average price of Rs.%.2f\n",
               sc.additionalStocks, sc.currentPrice, sc.totalAmount, sc.desiredPrice);
    }
}

int main()
{
    while (1)
    {
        calculator();
        printf("Enter 'end' to stop and 'cls' to clean the screen or any key to continue: ");
        scanf("%s", last);
        if (strcmp(last,"end")==0)
        {
            break;
        }
        else if(strcmp(last,"cls")==0)
        {
            system("cls");
        }
        
    }

    return 0;
}