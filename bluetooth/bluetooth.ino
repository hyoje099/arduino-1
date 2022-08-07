#include<SoftwareSerial.h>
SoftwareSerial bluetooth(2,3);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetooth.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bluetooth.available()){
    Serial.write(bluetooth.read());
    
  }
   if(bluetooth.available()){
    bluetooth.write(bluetooth.read());
    
  }
}
