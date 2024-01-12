#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

const int analogPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(analogPin);
  float voltage = (analogValue/4095.0) * 3.3;

  Serial.print("Analog Value: ");
  Serial.println(analogValue);
  Serial.print(", Voltage: ");
  Serial.println(voltage);

  delay(1000); // Optional delay to slow down the readings
}