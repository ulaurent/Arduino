/*Programmed used as a Dynamic program that will respond to user events using serial library*/

#define ARRAY_SIZE 4
#define LED_1_PIN 12
#define LED_2_PIN 11
#define LED_3_PIN 10
#define LED_4_PIN 9

int ledNumbers[ARRAY_SIZE] = {LED_1_PIN, LED_2_PIN,LED_3_PIN, LED_4_PIN};

int setLedPinModes() // Set Pin Mode type of LED, OUTPUT or INPUT
{
  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    pinMode(ledNumbers[i],OUTPUT);
  }
}

int setInitState() // Set Initial state of LED, whether High or LOW
{
  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    digitalWrite(ledNumbers[i],LOW);
  }
}

void powerOnLed (int ledIndex)
{
  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    if(i == ledIndex){
      digitalWrite(ledNumbers[i],HIGH);
    }
    else{
      digitalWrite(ledNumbers[i],LOW);
    }
  }

}

void setup() {
  // put your setup code here, to run once:
  setLedPinModes();
  setInitState();
  Serial.begin(9600);
  Serial.println("--Choose An LED you want to Toggle (#'s 0 to 3)--");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    int recievedLedIndex = Serial.parseInt();
    if(recievedLedIndex < 0 || recievedLedIndex >= ARRAY_SIZE){
      Serial.println("Input out od bounds-- Use another number--");
    }
    else{
          powerOnLed(recievedLedIndex);
    }
  }

}