
#include <Servo.h>

Servo myservo; 
int sensor=0;
int angle=0;

void setup() {
  myservo.attach(9);  
}

void loop() {
  sensor=analogRead(A0);
  angle=map(sensor,0,1023,0,180);
  myservo.write(angle);                 
  delay(15);                      
}
