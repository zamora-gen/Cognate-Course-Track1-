int LED_Pin[ ] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(LED_Pin[i], OUTPUT);
  }
}


void loop() {
  for (int i = 10; i >= 0; i--) {
    digitalWrite(LED_Pin[i], HIGH);
    delay(500);
    digitalWrite(LED_Pin[i], LOW);
  }
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED_Pin[i], HIGH);
    delay(500);
    digitalWrite(LED_Pin[i], LOW);
  }
}