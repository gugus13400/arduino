#include <Servo.h>
int servoPin = 12; 
Servo Servo1;

const int ServoMoteur = A0;

void setup()
{
  Servo1.attach(servoPin);
  pinMode(ServoMoteur, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int angle;
  int valeur;
  valeur = analogRead(ServoMoteur);
  angle = map(valeur, 0, 1023, 0, 179);
  Serial.println(angle);
  Servo1.write(angle);
}
