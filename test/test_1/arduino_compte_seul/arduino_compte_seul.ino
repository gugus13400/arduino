boolean affichage;
int Pin=13;
int Pina=7;
void setup()
{
  Serial.begin(9600);
  affichage=true;
  Serial.println("debut");
  pinMode(Pin,OUTPUT);
  pinMode(Pina,OUTPUT);
}
void loop()
{
   if (affichage)
   {
       for (int compteur=0;compteur<=20;compteur++)
            {
            Serial.println(compteur);
            for (int Clignote=0;Clignote<compteur;Clignote++)
             {
              digitalWrite(Pin,1);
              delay(50);
              digitalWrite(Pin,0);
              delay(50);
              digitalWrite(Pina,1);
              delay(50);
              digitalWrite(Pina,0);
              delay(50);
             }
            delay(250);
            }
             affichage=false;
             Serial.println("ayé!!!");
   }
}
