/*HTTPS Model: This code will use HTTPS to send temperature readings from the ESP32 boards to an AWS Lambda function or API Gateway endpoint.*/

#include <WiFi.h>
#include <HTTPClient.h>
#include <DHT.h>

// WiFi settings
const char* ssid = "your-SSID";
const char* password = "your-PASSWORD";

// API endpoint settings
const char* serverName = "https://your-api-gateway-endpoint.amazonaws.com/dev/temperature";

// DHT sensor settings
#define DHTPIN1 4    // GPIO pin for the first DHT sensor
#define DHTPIN2 5    // GPIO pin for the second DHT sensor
#define DHTTYPE DHT22   // DHT 22 (AM2302), AM2321

DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);

void setup() {
  Serial.begin(115200);

  // Initialize the DHT sensors
  dht1.begin();
  dht2.begin();

  // Connect to WiFi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    // Read temperature from DHT sensors
    float temp1 = dht1.readTemperature();
    float temp2 = dht2.readTemperature();

    // Create a JSON payload
    String payload = "{\"temperature1\":";
    payload += temp1;
    payload += ", \"temperature2\":";
    payload += temp2;
    payload += "}";

    // Start the HTTP POST request
    http.begin(serverName);
    http.addHeader("Content-Type", "application/json");
    int httpResponseCode = http.POST(payload);

    // Check the HTTP response code
    if (httpResponseCode > 0) {
      String response = http.getString();
      Serial.println(httpResponseCode);
      Serial.println(response);
    } else {
      Serial.print("Error on sending POST: ");
      Serial.println(httpResponseCode);
    }

    http.end();
  }

  delay(10000); // Wait for 10 seconds before next reading
}
