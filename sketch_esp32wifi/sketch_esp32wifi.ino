#include <ESP8266WiFi.h>  // Correct library for WiFi functions on ESP8266 boards

void setup() {
  Serial.begin(9600);
  
  // Connect to Wi-Fi
  WiFi.mode(WIFI_STA);
  WiFi.begin("Xiaomi 13", "12345678");  // Replace "SSID" and "password" with your network details
  
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  // Print IP address when connected
  Serial.println("\nConnected to Wi-Fi!");
}

void loop() {
  
  // Main code here
}



