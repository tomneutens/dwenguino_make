#include <Arduino.h>
#include <Dwenguino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

/*
  Read buttons
 */

// the setup function runs once when you press reset or power the board
void setup() {
  initDwenguino();  // initialize all dwenguino functionality
  pinMode(13, OUTPUT);
  
  LEDS = 0b00000001;
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  for (unsigned char i=0; i<7; i++) {
    LEDS <<= 1;  // Rotate to the right
    delay(50);
  }
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  for (unsigned char i=0; i<7; i++) {
    LEDS >>= 1;  // Rotate to the left
    delay(50);
  }
}

/*void setup() {
  initDwenguino();
  LEDS = 0b00000001;
}
void loop() {
  for (unsigned char i=0; i<7; i++) {
    LEDS <<= 1;  // Rotate to the right
    delay(50);
  }
  for (unsigned char i=0; i<7; i++) {
    LEDS >>= 1;  // Rotate to the left
    delay(50);
  }
}*/

  
