#include <LiquidCrystal.h>
const int ledPin = 18;     // GPIO pin 23 for the LED
const int sensorPin = 16;  // GPIO pin 18 for the signal

// Define the LCD pin connections
 = 23, en = 22, d4 = 1, d5 = 3, d6 = 21, d7 = 19;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);
  delay(5000);
}

void loop() {
  int sensorState = digitalRead(sensorPin);

  if (sensorState == HIGH) {
    lcd.print("GAS DETECTED\n");
    digitalWrite(ledPin, HIGH);
    delay(2000);
    lcd.clear();  // Clear the LCD display
    digitalWrite(ledPin, LOW);

    delay(1000);
  }
}
