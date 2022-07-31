#include<Servo.h>
Servo servo;
void setup() {
  servo.attach(9); 
  Serial.begin(9600);
}

void loop() {
 int lightValue=analogRead(A0);
 Serial.println(lightValue);
 int i=lightValue%6;
  servo.write(i);
  delay(50);
  
}
