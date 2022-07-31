#include<Stepper.h>
int stepsPerRev=2048;
Stepper stepper(stepsPerRev,11,9,10,8);
void setup() {
  // put your setup code here, to run once:
  stepper.setSpeed(10);
  pinMode(5,INPUT);
  pinMode(3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3)==HIGH){
    stepper.step(stepsPerRev);
  delay(1000);
  }
  if(digitalRead(5)==HIGH){
    stepper.step(-stepsPerRev);
  delay(1000);


  
  }
  
  
}
