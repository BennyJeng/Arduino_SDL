-// 13=D7 ; 16=D0 ; 15=D8 ; 14=D5 ; 12=D6 ; 4=D2 ; 3=D9 ; 2=D4 ; 1=D10 ; 0=D3

void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(13,HIGH);
  delay(1000);

}
