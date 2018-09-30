/*Basic Conditional & Function for light Toggle*/

//Global Var
int ledPin = 13;
int a1 = 4;
int a2 = 6;

//Sum function
int sumall(int num1, int num2)
{
  return num1+num2;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // Which pin, what kind of output
  Serial.begin(9600); // Will initialize the serial communication on the Ard board //9600 is the serial baud rate
  int answer = sumall(a1,a2);

  if (a1 != 5)
  {
    Serial.println(answer);
    
  }
  else
  {
  Serial.println("Invalid");
  }
}

void loop() {
  if (a2 > a1)
  {
    digitalWrite(ledPin,HIGH);
    delay(6000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin,HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
  }
}