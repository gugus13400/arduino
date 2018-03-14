int nombre;
boolean nombredefois;
int chiffre;
int resultat;

void setup()
{
  Serial.begin(9600);
  Serial.println("*****************");
  nombre = 7;
  nombredefois = true;

}

void loop()
{
  if (nombredefois)
  {
    for ( int chiffre = 60; chiffre <= 70; chiffre ++)
    {
      Serial.print(chiffre);
      Serial.print("x");
      Serial.print("7");
      Serial.print("=");
      resultat = chiffre * nombre;
      Serial.println(resultat);
    }
      Serial.println("*****************");
  }

  nombredefois = false;

}
