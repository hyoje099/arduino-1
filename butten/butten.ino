int but=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,INPUT);
  pinMode(6,INPUT);
  pinMode(5,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3)==HIGH){
    Serial.println("1");
    delay(1000);
  }
  if(digitalRead(5)==HIGH){
    Serial.println("0");
    delay(1000);
  }
  if(digitalRead(6)==HIGH){
    Serial.println("1");
    delay(1000);
  }
  if(digitalRead(9)==HIGH){
    Serial.println("0");
    delay(1000);
  }
}
