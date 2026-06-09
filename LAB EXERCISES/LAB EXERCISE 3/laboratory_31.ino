#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int segPins[] = {A0, A1, A2, A3, A4, A5, 10}; 


byte digits[14][7] = {
  {1,1,1,1,1,1,0}, 
  {0,1,1,0,0,0,0}, 
  {1,1,0,1,1,0,1}, 
  {1,1,1,1,0,0,1}, 
  {0,1,1,0,0,1,1}, 
  {1,0,1,1,0,1,1}, 
  {1,0,1,1,1,1,1}, 
  {1,1,1,0,0,0,0}, 
  {1,1,1,1,1,1,1}, 
  {1,1,1,1,0,1,1}, 
  {1,1,1,0,1,1,1}, 
  {0,0,1,1,1,1,1}, 
  {1,0,0,1,1,1,0}, 
  {0,1,1,1,1,0,1}  
};

void setup() {
  for (int i = 0; i < 7; i++) pinMode(segPins[i], OUTPUT);
}

void loop() {
  char key = keypad.getKey();
  if (key) { 
    int index = -1;
    
   
    if (key >= '0' && key <= '9') index = key - '0';
    else if (key == 'A') index = 10;
    else if (key == 'B') index = 11;
    else if (key == 'C') index = 12;
    else if (key == 'D') index = 13;
    
    
    if (index != -1) {
      for (int i = 0; i < 7; i++) {
        digitalWrite(segPins[i], digits[index][i]);
      }
    }
  }
}