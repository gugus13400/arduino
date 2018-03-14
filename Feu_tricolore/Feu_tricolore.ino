const int V1 = 5;
const int V2 = 6;
const int O1 = 8;
const int O2 = 9;
const int R1 = 11;
const int R2 = 12;



void setup()
{
  pinMode(V1, OUTPUT);
  pinMode(V2, OUTPUT);
  pinMode(O1, OUTPUT);
  pinMode(O2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
}

void loop()
{
  digitalWrite(V1, HIGH);
  delay(3000);
  digitalWrite(V1, LOW);
  digitalWrite(O1, HIGH);
  delay(1000);
  digitalWrite(O1, LOW);
  digitalWrite(R1, HIGH);
  delay(3000);
  digitalWrite(R1, LOW);

  digitalWrite(V2, HIGH);
  delay(3000);
  digitalWrite(V2, LOW);
  digitalWrite(O2, HIGH);
  delay(1000);
  digitalWrite(O2, LOW);
  digitalWrite(R2, HIGH);
  delay(3000);
  digitalWrite(R2, LOW);
}
