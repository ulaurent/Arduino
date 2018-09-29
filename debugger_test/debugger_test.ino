/*Utilizing debugger through the serial monitor and the hardware button on uno*/

//Global Variable a
int a;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Will initialize the serial communication on the Ard board //9600 is the serial baud rate
  a = 5 + 5;
  Serial.println(a);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
}