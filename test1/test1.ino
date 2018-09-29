/*First Program to toggle LED L*/

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // Which pin, what kind of output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (13, HIGH); // High Meaning On

  delay(5000); // Delay between on to off, 2 seconds 
  
  digitalWrite (13, LOW); // Low meaning off

  delay(500); // Delay between on to off, 2 seconds
}