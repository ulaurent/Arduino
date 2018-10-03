/* Display max value of array on the serial monitor*/

#define ARRAY_SIZE 10

void setup() {
  Serial.begin(9600); 
  int numbers[ARRAY_SIZE]={3,6,65,34,56,78,32,45,89,68};
  int maxValue = 0;

  for(int i = 0; i < ARRAY_SIZE; i ++)
  {
    if (numbers[i] > maxValue)
    {
      maxValue = numbers[i];
    }
  }

  Serial.println(maxValue);
}

