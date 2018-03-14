int X=8;
int Y=6;
int Z=4;
int A=11;
int B=13;
int d=0;
void setup() 
{
  pinMode(X,OUTPUT);
  pinMode(Z,OUTPUT);
  pinMode(Y,OUTPUT);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  

}

void loop() 
 {
  if (d<1)
      {
       digitalWrite(X,HIGH);
       digitalWrite(Y,HIGH);
       digitalWrite(Z,HIGH);
       digitalWrite(A,HIGH);
       digitalWrite(B,HIGH);
       delay(1000);
       digitalWrite(X,LOW);
       digitalWrite(Y,LOW);
       digitalWrite(Z,LOW);
       digitalWrite(A,LOW);
       digitalWrite(B,LOW);
       delay(100);
       d=d++;
      }
  for (int temps=1000;temps>=200;temps=temps-200) // temps diminue a chaque tour
  {
  
     
                 if (d=1);
         {
            digitalWrite(Z,HIGH); //on allume la 1
            delay(temps);
            digitalWrite(Z,LOW);
            d=d++;
         }  
 
 
                      if (d=2)
            {
                digitalWrite(Y,HIGH); // on allume la 2
                delay(temps);
                digitalWrite(Y,LOW);
                d=d++;
            }  
      if (d=3);
      {
        digitalWrite(X,HIGH); // on allume la 3
        delay(temps);
        digitalWrite(X,LOW);
        d=d++;
      }
        if (d=4);
      {
        digitalWrite(A,HIGH); // on allume la 4
        delay(temps);
        digitalWrite(A,LOW);
        d=d++;
      }
       if (d=5);
      {
        digitalWrite(B,HIGH); // on allume la 5
        delay(temps);
        digitalWrite(B,LOW);
      }
     }
     
       d=d-5; // on revient a zero
 }


