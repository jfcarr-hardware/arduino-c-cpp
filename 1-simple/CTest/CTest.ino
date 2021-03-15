
void setup() { pinMode(LED_BUILTIN, OUTPUT); }

void loop() {
  int delayValue = 250;

  digitalWrite(LED_BUILTIN, HIGH);
  delay(delayValue);

  digitalWrite(LED_BUILTIN, LOW);
  delay(delayValue);
}
