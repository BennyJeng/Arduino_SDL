int sensor=A0;
int sensorread=0;
int newdata=0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorread=analogRead(sensor);
  newdata=map(sensorread,0,1023,0,255);
  Serial.println(newdata);
  analogWrite(3,newdata);
  delay(200);
}
