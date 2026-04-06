#include <WiFi.h>
#include "ThingSpeak.h"

const char* ssid = "ssid_Name";
const char* password = "password";
const char* writeAPIKey = "your_api";
const long channelNumber ; // write your own channel number

WiFiClient client;

#define MQ135_PIN 34  // Change as per your wiring

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected!");
  ThingSpeak.begin(client);
}

void loop() {
  int sensorValue = analogRead(MQ135_PIN);
  float voltage = sensorValue * (3.3 / 4095.0);

  // Upload to ThingSpeak (field1 for example)
  ThingSpeak.setField(1, sensorValue); 
  ThingSpeak.setField(2, voltage); 

  int status = ThingSpeak.writeFields(channelNumber, writeAPIKey);
  if (status == 200) {
    Serial.println("Update successful");
  } else {
    Serial.println("Update failed: " + String(status));
  }
  delay(20000); // ThingSpeak allows 1 update every 15 seconds
}
