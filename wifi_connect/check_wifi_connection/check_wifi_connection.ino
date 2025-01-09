#include <WiFiS3.h>  // For Arduino UNO R4 WiFi boards

// Replace with your network credentials
const char* ssid = "Kritsada's Iphone";
const char* password = "1234567890";

void setup() {
  // Start Serial Monitor for debugging
  Serial.begin(115200);
  delay(1000);

  // Begin Wi-Fi connection
  Serial.print("Connecting to Wi-Fi...");
  WiFi.begin(ssid, password);

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  // Wi-Fi connected
  Serial.println("\nWi-Fi connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Keep printing Wi-Fi connection status every 5 seconds
  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Wi-Fi is still connected.");
  } else {
    Serial.println("Wi-Fi disconnected!");
  }
  delay(5000);
}
