int a=8;
int b=9;
int c=10;
int d=11;
int delaytime=5;

void turn(int x){
  digitalWrite(x,HIGH);
  delay(delaytime);
  digitalWrite(x,LOW);
}

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);

}

void loop() {
 turn(a);
 turn(b);
 turn(c);
 turn(d);

}
