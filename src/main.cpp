#include <Arduino.h>

void setup() {

  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nJohannes Berbee");
  Serial.println("Student ID: 000788567");
  Serial.println("\nI Johannes Berbee verifiy this is all my work");
  Serial.print("Chip ID: ");
  Serial.print(ESP.getChipId());
  Serial.print("\nFlash Chip ID");
  Serial.print(ESP.getFlashChipId());


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(millis());
  delay(2000);

}