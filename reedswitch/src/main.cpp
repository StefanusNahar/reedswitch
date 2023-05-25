#include <Arduino.h>
#define HIGH 0
#define LOW 1
// Set the pin numbers
#define REED_PIN 15   // Pin to which the reed switch is connected
#define BUZZER_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(REED_PIN, INPUT_PULLUP);   // Set the reed switch pin as input with internal pull-up resistor
  pinMode(BUZZER_PIN, OUTPUT);          // Set the LED pin as output
}

void loop() {
  int reedState = digitalRead(REED_PIN);   // Read the state of the reed switch
  Serial.println (reedState);
  if (reedState == HIGH) {                  // If the reed switch is closed
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);          
  } else {
    digitalWrite(BUZZER_PIN, LOW);             // Turn off the LED
  }
}

