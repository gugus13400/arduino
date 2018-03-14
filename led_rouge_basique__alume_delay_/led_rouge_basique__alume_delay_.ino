//const int led_1 = 13;
//const int led_2 = 12;
//const int led_3 = 11;
//const int led_4 = 10;
//const int led_5 = 9;

void setup()
{
  for (int L = 13; L >= 9 ; L--)
  {
    pinMode(L, OUTPUT);

  }

}

void loop()
{

  for (int i = 100; i >= 20; i = i - 20)
    if (i > 80)
    {

      {
        for (int L = 13; L >= 9 ; L--)
        {
          digitalWrite(L, HIGH);
          delay(i);
          digitalWrite(L, LOW);
          delay(i);
        }

      }
    }
    else
    {
      for (int L = 13; L >= 9 ; L--)
      {
        digitalWrite(L, LOW);
      }
    }
}
