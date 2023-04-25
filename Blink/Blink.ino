
#define PIN_LED1 11
#define PIN_LED2 13
char data;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  //digitalWrite(PIN_LED2,LOW);
  //analogWrite(PIN_LED2,0);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
   if(Serial.available()){
 data = Serial.read();
 if(data=='1')
 {
  digitalWrite(PIN_LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
   Serial.write('1');
 }                      // wait for a second

  
  digitalWrite(PIN_LED2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(PIN_LED2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
   }
}
