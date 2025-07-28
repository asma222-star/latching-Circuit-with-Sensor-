void setup() {
  pinMode(5, OUTPUT);     //Set the "latch control pin" as output
  digitalWrite(5,LOW);    //IMPORTANT, start with the pin to LOW
  pinMode(6, OUTPUT);     //Set the LED pin as output

  int i = 0;
  //Do the next loop 3 times
  while(i < 3){
    digitalWrite(6,HIGH);    //Turn LED ON
    delay(200);              //Keep on for 200ms
   digitalWrite(6,LOW);     //Turn LED OFF
    delay(800);              //Keep OFF for 800ms
    i++;
  }
  //FINALLY: turn ON the "latch control pin" 
  digitalWrite(5,HIGH);     //That's it, this will turn OFF the circuit  
}

void loop() {
  // put your main code here, to run repeatedly:
}
