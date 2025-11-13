#include "DabbleESP32.h"
#include <ESP32Servo.h>
#define ESC1_PIN 14
#define ESC2_PIN 27
#define ESC3_PIN 26
#define ESC4_PIN 25

Servo esc1, esc2, esc3, esc4;
int motorNum = 1; bool running = false;
void setup() {
  Dabble.begin("MyDrone");
  esc1.attach(ESC1_PIN, 1000, 2000);
  // etc: attach others
}
void loop() {
  Dabble.processInput();
  if (GamePad.isStartPressed() && !running) {
    running = true;
    // Only one motor on at a time
    // (with logic as in the earlier multi-motor test code above)
    delay(2000);
    running = false;
    motorNum++; if (motorNum > 4) motorNum = 1;
  }
  if (GamePad.isCrossPressed()) {
    // Stop all motors
  }
}
