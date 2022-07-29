
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "/////"
#define BLYNK_DEVICE_NAME "/////"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

void setup()
{
  Serial.begin(115200);
  delay(100);
  pinMode(4, OUTPUT); // Initialise digital pin 2 as an output pin
  BlynkEdgent.begin();
}

BLYNK_WRITE(V0) // Executes when the value of virtual pin 0 changes
{
  if (param.asInt() == 1)
  {
    // execute this code if the switch widget is now ON
    digitalWrite(4, HIGH); // Set digital pin 2 HIGH
  }
  else
  {
    // execute this code if the switch widget is now OFF
    digitalWrite(4, LOW); // Set digital pin 2 LOW
  }
}

void loop() {
  BlynkEdgent.run();
}
