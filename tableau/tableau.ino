int pinLed[5] = {2, 3, 5, 8, 13};
boolean affichage[25][5] =
{
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 1,
  0, 0, 0, 1, 0,
  0, 0, 1, 0, 0,
  0, 1, 0, 0, 0,
  1, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  1, 0, 0, 0, 0,
  0, 1, 0, 0, 0,
  0, 0, 1, 0, 0,
  0, 0, 0, 1, 0,
  0, 0, 0, 0, 1,
  0, 0, 0, 0, 0,
  1, 1, 1, 1, 1,
  1, 1, 1, 1, 0,
  1, 1, 1, 0, 0,
  1, 1, 0, 0, 0,
  1, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  1, 1, 1, 1, 1,
  0, 1, 1, 1, 1,
  0, 0, 1, 1, 1,
  0, 0, 0, 1, 1,
  0, 0, 0, 0, 1,
  0, 0, 0, 0, 0
};

void setup()
{
  for (int i = 0; i < 5; i++)
  {
    pinMode(pinLed[i], OUTPUT);
    digitalWrite(pinLed[i], LOW);
  }
}


void loop()
{
  for (int i = 0; i < 25; i++)
  {
    for (int p = 0; p < 5; p++)
    {
      boolean etat = affichage[i][p];
      digitalWrite(pinLed[p], etat);
    }
    delay(300);
  }
}

