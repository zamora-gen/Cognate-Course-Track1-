int LED_Pin[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void setup() {

  for (int i = 0; i < 11; i++) {
    pinMode(LED_Pin[i], OUTPUT);
  }

}

void loop() {

  
  digitalWrite(LED_Pin[0], HIGH);
  digitalWrite(LED_Pin[10], HIGH);
  delay(300);
  digitalWrite(LED_Pin[0], LOW);
  digitalWrite(LED_Pin[10], LOW);

  
  digitalWrite(LED_Pin[1], HIGH);
  digitalWrite(LED_Pin[9], HIGH);
  delay(300);
  digitalWrite(LED_Pin[1], LOW);
  digitalWrite(LED_Pin[9], LOW);

  
  digitalWrite(LED_Pin[2], HIGH);
  digitalWrite(LED_Pin[8], HIGH);
  delay(300);
  digitalWrite(LED_Pin[2], LOW);
  digitalWrite(LED_Pin[8], LOW);


  digitalWrite(LED_Pin[3], HIGH);
  digitalWrite(LED_Pin[7], HIGH);
  delay(300);
  digitalWrite(LED_Pin[3], LOW);
  digitalWrite(LED_Pin[7], LOW);

 
  digitalWrite(LED_Pin[4], HIGH);
  digitalWrite(LED_Pin[6], HIGH);
  delay(300);
  digitalWrite(LED_Pin[4], LOW);
  digitalWrite(LED_Pin[6], LOW);

  
  digitalWrite(LED_Pin[5], HIGH);
  delay(300);
  digitalWrite(LED_Pin[5], LOW);


  digitalWrite(LED_Pin[4], HIGH);
  digitalWrite(LED_Pin[6], HIGH);
  delay(300);
  digitalWrite(LED_Pin[4], LOW);
  digitalWrite(LED_Pin[6], LOW);

 
  digitalWrite(LED_Pin[3], HIGH);
  digitalWrite(LED_Pin[7], HIGH);
  delay(300);
  digitalWrite(LED_Pin[3], LOW);
  digitalWrite(LED_Pin[7], LOW);

  
  digitalWrite(LED_Pin[2], HIGH);
  digitalWrite(LED_Pin[8], HIGH);
  delay(300);
  digitalWrite(LED_Pin[2], LOW);
  digitalWrite(LED_Pin[8], LOW);


  digitalWrite(LED_Pin[1], HIGH);
  digitalWrite(LED_Pin[9], HIGH);
  delay(300);
  digitalWrite(LED_Pin[1], LOW);
  digitalWrite(LED_Pin[9], LOW);

 
  digitalWrite(LED_Pin[0], HIGH);
  digitalWrite(LED_Pin[10], HIGH);
  delay(300);
  digitalWrite(LED_Pin[0], LOW);
  digitalWrite(LED_Pin[10], LOW);

}