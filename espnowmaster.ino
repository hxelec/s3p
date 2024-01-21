#include <Adafruit_NeoPixel.h>

/*
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/esp-now-esp32-arduino-ide/
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files.
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
*/

#include <esp_now.h>
#include <WiFi.h>

Adafruit_NeoPixel pixels(1, 21, NEO_GRB + NEO_KHZ800);

// REPLACE WITH YOUR RECEIVER MAC Address
uint8_t broadcastAddress[] = {0xDC, 0xDA, 0x0C, 0x2A, 0x4E, 0xC0};

// Structure example to send data
// Must match the receiver structure
typedef struct struct_message {
  int a;
  int b;
} struct_message;

// Create a struct_message called myData
struct_message myData;

esp_now_peer_info_t peerInfo;

bool connect = true;

// callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}
 
void setup() {
  // Init Serial Monitor
  Serial.begin(115200);
 
  pixels.begin();
  pixels.setBrightness(100);

  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);

  // Init ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);
  
  // Register peer
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  
  // Add peer        
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
}
 
void loop() {
  if (connect = true) {
    pixels.fill(0xFF0000);
    pixels.show();
    // Set values to send
    myData.a = 1175; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1397, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0xFF0000);
    pixels.show();
      // Set values to send
    myData.a = 1175; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1397, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    delay(400);

    pixels.fill(0x008000);
    pixels.show();
    tone(38, 1568, 300);
    tone(38, 1760, 70);
    delay(400);
    tone(38, 1760, 100);
    tone(38, 1568, 210);
    pixels.fill(0x000000);
    pixels.show();
    delay(400);

    pixels.fill(0xFF0000);
    pixels.show();
    // Set values to send
    myData.a = 1047; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1319, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0xFF0000);
    pixels.show();
      // Set values to send
    myData.a = 1047; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1319, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    delay(400);

    pixels.fill(0x008000);
    pixels.show();
    tone(38, 2093, 400);
    tone(38, 1865, 100);
    tone(38, 1760, 210);
    pixels.fill(0x000000);
    pixels.show();
    delay(800);

    pixels.fill(0xFF0000);
    pixels.show();
    // Set values to send
    myData.a = 932; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1175, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0xFF0000);
    pixels.show();
      // Set values to send
    myData.a = 932; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1175, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0x008000);
    pixels.show();
    tone(38, 1865, 100);
    tone(38, 1760, 100);
    tone(38, 1568, 100);
    tone(38, 1397, 100);
    tone(38, 1568, 300);
    tone(38, 1760, 70);
    pixels.fill(0x000000);
    pixels.show();
    delay(800);
    pixels.fill(0x008000);
    pixels.show();
    tone(38, 1760, 100);
    tone(38, 1568, 210);
    pixels.fill(0x000000);
    pixels.show();
    delay(400);

    pixels.fill(0xFF0000);
    pixels.show();
    // Set values to send
    myData.a = 1047; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1568, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0xFF0000);
    pixels.show();
      // Set values to send
    myData.a = 1047; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1568, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    delay(400);

    pixels.fill(0xFF0000);
    pixels.show();
    // Set values to send
    myData.a = 1109; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1319, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    pixels.fill(0xFF0000);
    pixels.show();
      // Set values to send
    myData.a = 1109; //note frequency
    myData.b = 200; //note duration
    
    // Send message via ESP-NOW
    result = esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

    tone(38, 1319, 140);
    pixels.fill(0x000000);
    pixels.show();
    delay(200);
    noTone(38);

    delay(400);
  }
}
