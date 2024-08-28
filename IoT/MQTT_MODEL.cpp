/*MQTT Model : This code will use the MQTT protocol to publish temperature readings from the ESP32 boards to AWS IoT Core.*/

#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

// WiFi and MQTT server settings
const char* ssid = "your-SSID";
const char* password = "your-PASSWORD";
const char* mqttServer = "your-aws-endpoint.amazonaws.com";
const int mqttPort = 8883;
const char* mqttUser = "your-aws-username";
const char* mqttPassword = "your-aws-password";
const char* topic = "esp32/temperature";

// DHT sensor settings
#define DHTPIN1 4    // GPIO pin for the first DHT sensor
#define DHTPIN2 5    // GPIO pin for the second DHT sensor
#define DHTTYPE DHT22   // DHT 22 (AM2302), AM2321

DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);

WiFiClientSecure espClient;
PubSubClient client(espClient);

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

  // Connect to MQTT server
  espClient.setCACert(AWS_CERT_CA);  // Root CA certificate
  espClient.setCertificate(AWS_CERT_CRT);  // Device certificate
  espClient.setPrivateKey(AWS_CERT_PRIVATE);  // Device private key
  
  client.setServer(mqttServer, mqttPort);
  while (!client.connected()) {
    Serial.println("Connecting to MQTT...");
    if (client.connect("ESP32Client", mqttUser, mqttPassword)) {
      Serial.println("Connected to MQTT");
    } else {
      Serial.print("Failed MQTT connection, state=");
      Serial.print(client.state());
      delay(2000);
    }
  }
}

void loop() {
  // Read temperature from DHT sensors
  float temp1 = dht1.readTemperature();
  float temp2 = dht2.readTemperature();

  // Create a JSON payload
  String payload = "{\"temperature1\":";
  payload += temp1;
  payload += ", \"temperature2\":";
  payload += temp2;
  payload += "}";

  // Publish the data to the MQTT topic
  client.publish(topic, payload.c_str());

  delay(10000); // Wait for 10 seconds before next reading
}
