/* this program utilizes the eeprom library in order to store data on the controller even after reset 
in a special designated memory area. It tores the last index of the LED that was powered on before reboot*/

#include <EEPROM.h>

#define ARRAY_SIZE 4
#define LED_1_PIN 12
#define LED_2_PIN 11
#define LED_3_PIN 10
#define LED_4_PIN 9

#define LAST_SELECTED_LED_EEPROM_ADDRESS 0

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

void eepromSavedMem (int ledIndex){
  EEPROM.write(LAST_SELECTED_LED_EEPROM_ADDRESS,ledIndex);
}

void setup() {
  Serial.begin(9600);
  setLedPinModes();
  //setInitState();
  int lastLedOff = EEPROM.read(LAST_SELECTED_LED_EEPROM_ADDRESS);
  powerOnLed(lastLedOff);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    int recievedLedIndex = Serial.parseInt();
    eepromSavedMem(recievedLedIndex);
    if(recievedLedIndex < 0 || recievedLedIndex >= ARRAY_SIZE){
      Serial.println("Input out od bounds-- Use another number--");
    }
    else{
          powerOnLed(recievedLedIndex);
    }
  }

}