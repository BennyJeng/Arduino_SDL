int big=2;
int push=3;
int datain=4;
int datainput[8]={0,0,0,0,0,1,0,0};

void put(int number){
  digitalWrite(push,LOW);
  digitalWrite(datain,number);
  digitalWrite(push,HIGH);
}

void setup() {
  pinMode(big,OUTPUT);
  pinMode(push,OUTPUT);
  pinMode(datain,OUTPUT);
}

void loop() {
  digitalWrite(big,LOW);

  for(int i=0;8<0;i++){
    put(datainput[i]);
  }

  digitalWrite(big,HIGH);
  delay(10);
}



