int potPin = A0;
int led_1 = 8;
int led_2 = 9;
int led_3 = 10;
int led_4 = 11;
int led_5 = 12;

void setup()
{
  pinMode(potPin, INPUT);
  Serial.begin(9600);

  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_4, OUTPUT);
  pinMode(led_5, OUTPUT);

}

void loop()
{
  int potentiometre = (analogRead(potPin) / 255)+1;
  Serial.println(potentiometre);
  switch (potentiometre)
  {
    case 1:
      Serial.println("rouge");
      digitalWrite(led_1, HIGH);
      delay (60);
      digitalWrite(led_1,LOW);
      break;
    case 2:
      Serial.println("vert");
      digitalWrite(led_2, HIGH);
      delay (60);
      digitalWrite(led_2,LOW);
      break;
    case 3:
      Serial.println("bleu");
      digitalWrite(led_3, HIGH);
      delay (60);
      digitalWrite(led_3,LOW);
      break;
    case 4:
      Serial.println("rouge");
      digitalWrite(led_4, HIGH);
      delay (60);
      digitalWrite(led_4,LOW);
      break;
    case 5:
      Serial.println("jaune");
      digitalWrite(led_5, HIGH);
      delay (60);
      digitalWrite(led_5,LOW);
      break;
  }
}
