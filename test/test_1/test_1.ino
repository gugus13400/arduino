const int BITE = 13;
int Pause;
int Compte;
boolean stop;

void setup()
{
  stop = true;
  Pause = 100;
  pinMode(BITE, HIGH);
  pinMode(7, HIGH);
  Serial.begin(9600);// initialisation de la communication
  Serial.println("DÃ©but du programme");
}



void loop()
{
  if (stop)
  {
    for (int compteur = 0; compteur <= 10; compteur ++)

    {

      digitalWrite(BITE, HIGH);
      delay(Pause);
      digitalWrite(BITE, LOW);
      delay(Pause);
       digitalWrite(2, HIGH);
      delay(Pause);
      digitalWrite(2, LOW);
      delay(Pause);
      Serial.println(compteur);//envoi d'un autre message
      Pause +=100;

    }
    //stop = false;
    Serial.println ("done bitches");
  }
}

