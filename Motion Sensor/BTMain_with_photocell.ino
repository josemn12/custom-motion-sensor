#define pirPin 8
int PIRState = 0;
int resistorValue; 
void setup() {
  // put your setup code here, to run once:
pinMode (pirPin, INPUT);
Serial.begin(38400);


}

void loop() {
  int resistorValue = analogRead(A0);
  // put your main code here, to run repeatedly:
delay (100);
PIRState = digitalRead (pirPin);
//Serial.print("resistor:  ");
//Serial.print(resistorValue);

/*if (PIRState == HIGH) {
  Serial.print('1');
  Serial.println();
  //Serial.print("resistor:  ");
  //Serial.print(resistorValue);
}
else if(PIRState == LOW) {
  Serial.print('0');
  Serial.println();
  Serial.print("resistor:  ");
  Serial.print(resistorValue);
}
else (PIRState == LOW && resistorValue <=200){
  
  Serial.print('2');
} */ //end if blocks

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
