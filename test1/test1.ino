/*First Program to toggle LED L*/

// Global variables
int leadPin = 13;

void primeLight(){
  // put your main code here, to run repeatedly:
  digitalWrite (leadPin, HIGH); // High Meaning On
  delay(5000); // Delay between on to off, 2 seconds
  digitalWrite (leadPin, LOW);
  delay(10000);
}

void secLight(){
  digitalWrite (leadPin, HIGH);
  delay(3000);
  digitalWrite (leadPin, LOW); // Low meaning off
  delay(2000); // Delay between on to off, 2 seconds
}

void setup() {
  // put your setup code here, to run once:
  pinMode(leadPin, OUTPUT); // Which pin, what kind of output
}

void loop() {
   primeLight();
   secLight();
}