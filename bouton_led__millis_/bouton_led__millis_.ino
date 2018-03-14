int ledPin = 13;
int butonPin = 2;

int etat;
int lastbutonstate = 1;
long unsigned int lastpress;
int debounceTime = 20;


void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butonPin, INPUT_PULLUP);
}

void loop()
{
  int etatbouton = digitalRead(butonPin);

  if ((millis() - lastpress) > debounceTime)
  {
    lastpress = millis();

    if (etatbouton == 0 && lastbutonstate == 1)
    {
      etat =! etat;
      digitalWrite(ledPin, etat);
      lastbutonstate = etatbouton;
    }
    if (etatbouton == 1 && lastbutonstate == 0)
    {
      lastbutonstate = etatbouton;
    }
  }
}
