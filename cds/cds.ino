void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  }

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue=analogRead(A0);

  Serial.println(lightValue);
  
  
}
