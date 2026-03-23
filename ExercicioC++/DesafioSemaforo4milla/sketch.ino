const int laranja[] = {2, 4}; // LED laranja
const int laranja2[] = {16, 17};
const int amarelo = 5;
const int amarelo2 = 18;
const int amarelo3 = 19;
const int amarelo4 = 21;
const int amarelo5 = 22;
const int amarelo6 = 23;
const int verde[] = {12, 13};
const int red[] = {14, 27};
const int piskada = 500;
const int chegada = 1000;

const int numLeds = sizeof(laranja) / sizeof(int);
const int numLeds2 = sizeof(laranja2) / sizeof(int);
const int numLeds3 = sizeof(verde) / sizeof(int);
const int numLeds4 = sizeof(red) / sizeof(int);

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(laranja[i], OUTPUT); // Saída
  }
  for (int i = 0; i < numLeds2; i++) {
    pinMode(laranja2[i], OUTPUT); // Saída
  }
  pinMode(amarelo, OUTPUT);
  pinMode(amarelo2, OUTPUT);
  pinMode(amarelo3, OUTPUT);
  pinMode(amarelo4, OUTPUT);
  pinMode(amarelo5, OUTPUT);
  pinMode(amarelo6, OUTPUT);
  
  for (int i = 0; i < numLeds3; i++) {
    pinMode(verde[i], OUTPUT); // Saída
  }
  for (int i = 0; i < numLeds4; i++) {
    pinMode(red[i], OUTPUT); // Saída
  }
}

void loop() {
  // Acionar LEDs laranja sequencialmente
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(laranja[i], HIGH);
    digitalWrite(laranja[i], HIGH);
    delay(piskada);
  }
  for (int i = 0; i < numLeds2; i++) {
    digitalWrite(laranja2[i], HIGH);
  }
  delay(piskada);
  for (int i = 0; i < numLeds3; i++) {
    digitalWrite(laranja2[i], HIGH);
  }
  delay(piskada);
  // LEDs amarelos sequencialmente
  digitalWrite(amarelo, HIGH);
  delay(piskada);
  digitalWrite(amarelo, LOW);
  delay(piskada);

  digitalWrite(amarelo2, HIGH);
  delay(piskada);
  digitalWrite(amarelo2, LOW);
  delay(piskada);

  digitalWrite(amarelo3, HIGH);
  delay(piskada);
  digitalWrite(amarelo3, LOW);
  delay(piskada);

  digitalWrite(amarelo4, HIGH);
  delay(piskada);
  digitalWrite(amarelo4, LOW);
  delay(piskada);

  digitalWrite(amarelo5, HIGH);
  delay(piskada);
  digitalWrite(amarelo5, LOW);
  delay(piskada);

  digitalWrite(amarelo6, HIGH);
  delay(piskada);
  digitalWrite(amarelo6, LOW);
  delay(piskada);
  // Acionar LEDs verdes juntos
  for (int i = 0; i < numLeds3; i++) {
    digitalWrite(verde[i], HIGH);
  }
  delay(piskada);
  for (int i = 0; i < numLeds3; i++) {
    digitalWrite(verde[i], LOW);
  }
  delay(piskada);

  // Acionar LEDs vermelhos juntos
  for (int i = 0; i < numLeds4; i++) {
    digitalWrite(red[i], HIGH);
  }
  delay(chegada);
  for (int i = 0; i < numLeds4; i++) {
    digitalWrite(red[i], LOW);
  }
  delay(chegada);
}
