
void setup() {
  Serial.begin(9600);
  for (int c = 32; c < 128; c++)
  {
    Serial.println(c);

    Serial.println(char(c));
  
  }
}

void loop()
{

}
