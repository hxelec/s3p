/**
 * This example turns the ESP32 into a Bluetooth LE mouse that continuously moves the mouse.
 */
#include <BleMouse.h>

BleMouse bleMouse("S3P", "Haase Industries", 100);

bool hasRan = false;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    if (hasRan == false) {
      unsigned long startTime;

      Serial.println("Scroll up");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(0,0,10);
        delay(100);
      }
      delay(500);

      Serial.println("Scroll down");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(0,0,-10);
        delay(100);
      }
      delay(500);

      Serial.println("Move mouse pointer up");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(0,-10);
        delay(100);
      }
      delay(500);

      Serial.println("Move mouse pointer down");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(0,10);
        delay(100);
      }
      delay(500);

      Serial.println("Move mouse pointer left");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(-10,0);
        delay(100);
      }
      delay(500);

      Serial.println("Move mouse pointer right");
      startTime = millis();
      while(millis()<startTime+2000) {
        bleMouse.move(10,0);
        delay(100);
      }
      delay(500);
      hasRan = true;
    }
  }
}