int led = 8;
int ldr = A0;
int value = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  value = analogRead(ldr);

  if (value < 500) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}
