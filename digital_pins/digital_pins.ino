/*Optimiztion toggle of LED using arrays and loop*/
#define LED_1_PIN 9
#define LED_2_PIN 10
#define LED_3_PIN 11
#define LED_4_PIN 12

#define ARRAY_SIZE 4

//Array of LEDS
int pinLedArray[ARRAY_SIZE] = {LED_1_PIN, LED_2_PIN, LED_3_PIN, LED_4_PIN};


void setup() {
  
  for (int i=0; i < ARRAY_SIZE; i++){
    pinMode(pinLedArray[i], OUTPUT);
  }
  
  //Initialize the LED; Cannot assume they are automatically in low Mode
  for (int i=0; i < ARRAY_SIZE; i++){
    digitalWrite(pinLedArray[i], LOW);
  }

}

void loop() {
  
  for (int i=0; i < ARRAY_SIZE; i++){
    digitalWrite(pinLedArray[i], HIGH);
    delay(100);
    digitalWrite(pinLedArray[i],LOW);
    delay(100);
  }

}