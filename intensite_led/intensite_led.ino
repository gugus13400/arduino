int pinLed = 3;
int inbetweentime;
void setup()
{
  pinMode(pinLed, OUTPUT);
  inbetweentime = 3;
  Serial.begin(9600);
}

void loop()
{
  for (int i; i < 255; i++)
  {
    analogWrite(pinLed, i);
    delay(inbetweentime);
    Serial.println(i);
  }
  for (int i=255; i > 0; i--)
  {
    analogWrite(pinLed,i);
    delay(inbetweentime);
    Serial.println(i);
  }
}
