int cambien = D5;
int bom = D6;
int nhac = D4;
void setup() {
  // put your setup code here, to run once:
  digitalWrite(nhac,HIGH);
pinMode(cambien, INPUT_PULLUP);
pinMode(nhac, OUTPUT);
pinMode(bom, OUTPUT);
digitalWrite(nhac,HIGH);
digitalWrite(bom,LOW);
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(cambien)== HIGH){
  delay(100);
  if(digitalRead(cambien)== LOW){
 delay(200);
 digitalWrite(bom, HIGH);
 delay(300);
 digitalWrite(nhac,LOW);
 delay(100);
 digitalWrite(nhac,HIGH);
 delay(2000);
 digitalWrite(bom,LOW);
 delay(3000);
}
}
}
