#include <IRremote.h>

IRrecv irrecv(6);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  Serial.println("Enabled IRin");
  pinMode(7,OUTPUT);
}

void loop() {
  if(irrecv.decode(&results)){
    Serial.println(results.value);
    irrecv.resume();
  }
  delay(100);
}
