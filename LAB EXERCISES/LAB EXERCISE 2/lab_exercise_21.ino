int counter = 0;
const int buttonIncrement = 9;
const int buttonDecrement = 10;


const int segPins[] = {2,3,4,5,6,7,8};


const byte digitPatterns[10] = {
  B00111111, 
  B00000110, 
  B01011011, 
  B01001111, 
  B01100110, 
  B01101101, 
  B01111101, 
  B00000111, 
  B01111111, 
  B01101111  
};

void setup() {
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  
  for(int i=0; i<7; i++){
    pinMode(segPins[i], OUTPUT);
  }
  updateDisplay();
}

void loop() {
  if(digitalRead(10) == HIGH){
    if(counter < 9) counter++;
    updateDisplay();
    delay(200); 
  }
  
  if(digitalRead(9) == HIGH){
    if(counter > 0) counter--;
    updateDisplay();
    delay(200);
  }
}

void updateDisplay(){
  byte pattern = digitPatterns[counter];
  for(int i=0; i<7; i++){
    digitalWrite(segPins[i], bitRead(pattern, i));
  }
}