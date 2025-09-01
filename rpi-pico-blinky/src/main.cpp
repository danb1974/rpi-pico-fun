#include <Arduino.h>

#define PIN_LED 25

void setup() {
  pinMode(PIN_LED, OUTPUT); // Onboard LED on GPIO 25
}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(500);
  digitalWrite(PIN_LED, LOW);
  delay(500);
}
