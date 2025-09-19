#define pirPin 8
int PIRState = 0;
int resistorValue; 

void setup() {
  
pinMode (pirPin, INPUT);
Serial.begin(38400);

}

void loop() {
  int resistorValue = analogRead(A0);
  
delay (100);
PIRState = digitalRead (pirPin);

if (PIRState == LOW && resistorValue <= 100 ){
  
  Serial.print('2');
  Serial.println();
}
else if (PIRState == HIGH) {
  Serial.print('1');
  Serial.println();
  //Serial.print("resistor:  ");
  //Serial.print(resistorValue);
}
else {
  Serial.print('0');
  Serial.println();
  //Serial.print("resistor:  ");
  //Serial.print(resistorValue);
}



}//end main loop
