#include <Servo.h>
Servo servo1;
int ledPin = 13;
int inPin = 7;
int val = 0;
float EMG = A0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(inPin, INPUT);
  servo1.attach(9, 900, 2100);
  pinMode(EMG, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0*5.0/1023.0));
  delay(10);
}
