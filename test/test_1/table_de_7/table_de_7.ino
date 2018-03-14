int numTable;
boolean affiche;
void setup() 
{
  numTable = 7;
  affiche = true;
  Serial.begin(9600);
  Serial.println("***********************");
  Serial.println("Table de multiplication");
  Serial.print("La table de :");
  Serial.println(numTable);
  Serial.println();
}

void loop() 
{
  if (affiche)
  {
    for (int t=0;t<=14;t++)
    {
      int resultat=numTable*t;
      Serial.print(t);
      Serial.print(" x ");
      Serial.print(numTable);
      Serial.print(" = ");
      Serial.println(resultat);
    }
    Serial.println();
    Serial.print("***********************");
    affiche=false;
  }
}
