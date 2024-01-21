/**
 * This example turns the ESP32 into a Bluetooth LE mouse that continuously moves the mouse.
 */
#include <BleMouse.h>

BleMouse bleMouse("S3P", "Haase Industries", 100);

int i = 0;
bool delayd = false;

void setup() {
  Serial.begin(115200);
  Serial.println("Starting BLE work!");
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    if(delayd == false) {
      delay(1000);
      delayd = true;
    }
    if (i < 1000) {
      bleMouse.click(MOUSE_LEFT);
      delay(2);
      i++;
    }
  }
}