#include <Arduino.h>

void setup() {

  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nJohannes Berbee");
  Serial.println("\n\nStudent ID: 000788567");

  Serial.println("Chip ID:" + ESP.getChipId());
  Serial.println("\nFlash Chip ID" + ESP.getFlashChipId());

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Time Since Start:" + millis());
  delay(2000);

}