int buzzer = 38;

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(38, 523, 500);
  delay(650);
  noTone(38);
  tone(38, 587, 500);
  delay(650);
  noTone(38);
  tone(38, 659, 500);
  delay(650);
  noTone(38);
  tone(38, 698, 500);
  delay(650);
  noTone(38);
  tone(38, 784, 500);
  delay(650);
  noTone(38);
  tone(38, 880, 500);
  delay(650);
  noTone(38);
  tone(38, 988, 500);
  delay(650);
  noTone(38);
  tone(38, 1047, 500);
  delay(650);
  noTone(38);
}
