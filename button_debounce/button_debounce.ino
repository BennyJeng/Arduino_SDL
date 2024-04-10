
int pushButton=7;
int buttonState=0;
int beforeState=0;
int time=0;

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() {
  buttonState = digitalRead(pushButton);
  if(buttonState==1 and beforeState==0){
    time ++;
    Serial.print("press:");
    Serial.println(time);
  }
  if(buttonState!=beforeState){
    delay(20);
  }
  beforeState=buttonState;
  delay(1);  
}
