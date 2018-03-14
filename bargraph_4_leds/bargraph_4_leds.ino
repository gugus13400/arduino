const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int led4 = 11;
const int boutonplus = 3;
const int boutonmoins = 2;

int nombredeled = 1;
int memoireplus = HIGH;
int memoiremoins = HIGH;
int etatbouton = HIGH;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(boutonplus, INPUT);
  pinMode(boutonmoins, INPUT);
}

void loop()
{

  etatbouton = digitalRead(boutonplus);
  if (etatbouton != memoireplus & etatbouton == LOW)
  {
    nombredeled++;
  }
  memoireplus = etatbouton;


  etatbouton = digitalRead(boutonmoins);
  if (etatbouton != memoiremoins & etatbouton == LOW)
  {
    nombredeled--;
  }
  memoiremoins = etatbouton;

  if (nombredeled > 4)
  {
    nombredeled = 4;
  }
  if (nombredeled < 0)
  {
    nombredeled = 0;
  }
  affiche(nombredeled);
}
void affiche(int valeur_recue)
{
  // on éteint toutes les led
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);

  // Puis on les allume une à une
  if (valeur_recue >= 1)
  {
    digitalWrite(led1, LOW);
  }
  if (valeur_recue >= 2)
  {
    digitalWrite(led2, LOW);
  }
  if (valeur_recue >= 3)
  {
    digitalWrite(led3, LOW);
  }
  if (valeur_recue >= 4)
  {
    digitalWrite(led4, LOW);
  }
}

