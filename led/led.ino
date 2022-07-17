void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
 pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   ledw(7);
   ledw(4);
   ledw(8);
}
void ledw(int pinNumber){
  digitalWrite(pinNumber,HIGH);
   delay(100);
  digitalWrite(pinNumber,LOW);
   delay(100);
  
}
