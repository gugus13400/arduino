const int led1 = 10;
const int led2 = 11;
const int led3 = 12;
const int led4 = 13;
const int Btn_minus = 2;
const int Btn_plus = 3;

int nombre_led = 0;
int etat_bouton;

int memoire_plus = HIGH; // état relâché par défaut
int memoire_minus = HIGH;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(Btn_minus, INPUT);
  pinMode(Btn_plus, INPUT);

}
void loop()
{
  etat_bouton = digitalRead(Btn_plus);

  if ((etat_bouton != memoire_plus) && (etat_bouton == LOW))
  {
    nombre_led++;
  }
  memoire_plus = etat_bouton;

  etat_bouton = digitalRead(Btn_minus);

  if ((etat_bouton != memoire_minus) && (etat_bouton == LOW))
  {
    nombre_led--;
  }
  memoire_minus = etat_bouton;
  if (nombre_led > 4)
  {
    nombre_led = 4;
  }
  if (nombre_led < 0)
  {
    nombre_led = 0;
  }
}
void affiche(int valeur_recue)
{
    // on éteint toutes les LED
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);

    // Puis on les allume une à une
    if(valeur_recue >= 1)
    {
        digitalWrite(led1, LOW);
    }
    if(valeur_recue >= 2)
    {
        digitalWrite(led2, LOW);
    }
    if(valeur_recue >= 3)
    {
        digitalWrite(led3, LOW);
    }
    if(valeur_recue >= 4)
    {
        digitalWrite(led4, LOW);
    }
}

