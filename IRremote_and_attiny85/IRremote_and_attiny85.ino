#include <IRremote.h>

IRrecv irrecv(3);
decode_results results;

void setup() {
  irrecv.enableIRIn();
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  analogWrite(0,0);
  analogWrite(1,0);
  analogWrite(2,0);
}

void loop() {
  if(irrecv.decode(&results)){
    if(results.value==16738455){
      analogWrite(0,0);
      analogWrite(1,0);
      analogWrite(2,0);
    }
    
    if(results.value==16724175){
      analogWrite(0,255);
    }

    if(results.value==16718055){
      analogWrite(1,255);
    }

    if(results.value==16743045){
      analogWrite(2,255);
    }

    irrecv.resume();
  }
  delay(100);
}