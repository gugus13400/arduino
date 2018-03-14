int Pause;
const int X=13;
void setup() {
 pinMode (X,OUTPUT);
 Pause=100;
}

void loop() {
digitalWrite(X,LOW);
delay(Pause);
digitalWrite(X,HIGH);
delay(Pause);
}
