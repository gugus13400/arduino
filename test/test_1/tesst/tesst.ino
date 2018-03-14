boolean affichage;
int Pin=13;
void setup()
{
  Serial.begin(9600);
  affichage=true;
  Serial.println("debut");
  pinMode(Pin,OUTPUT);
}
void loop()
{
   if (affichage)
   {
       for (int compteur=0;compteur<=20;compteur=compteur+1)
            {
            Serial.println(compteur);
            for (int Clignote=0;Clignote<compteur;Clignote=Clignote+1)
             {
              digitalWrite(Pin,1);
              delay(250);
              digitalWrite(Pin,0);
              delay(250);
             }
            delay(1000);
            }
             affichage=false;
   }
}
