int Shock=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(Shock,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(Shock)==HIGH){
    digitalWrite(8,HIGH);
    delay(100);
  }else{
    digitalWrite(8,LOW);
    delay(100);
  }
}
