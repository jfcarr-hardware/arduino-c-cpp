class MyLooper {
public:
  int delayValue;

  void ledOn() {
    digitalWrite(LED_BUILTIN, HIGH);

    delay(delayValue);
  }

  void ledOff() {
    digitalWrite(LED_BUILTIN, LOW);

    delay(delayValue);
  }
};

MyLooper myLooper;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  myLooper.delayValue = 250;
}

void loop() {
  myLooper.ledOn();

  myLooper.ledOff();
}
