#include<SoftwareSerial.h>
SoftwareSerial wifi(2,3);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  wifi.begin(9600);
  wifi.setTimeout(5000);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    wifi.write(Serial.read());
  }
  if(Serial.available()){
    Serial.write(wifi.read());
  }
}
//AT+CWJAP="UCA","0527080001",2
