#define SIZE 6
int led[SIZE] = {2, 3, 4, 5, 6, 7};
int sw[SIZE] = {A0, A1, A2, A3, A4, A5};

void setup() {
  for (i = 0; i < SIZE; i++) {
    pinMode(led[i], OUTPUT);
    pinMode(sw[i], INPUT);
  }
}

void loop() {
  for (i = 0; i < SIZE; i++) {
    if (digitalRead(sw[i]) == HIGH) {
      digitalWrite(led[i], !digitalRead(led[i]));
      delay(300);
    }
  }
}
