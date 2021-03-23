class MyPir {
private:
  int ledPin;
  int inputPin;

public:
  int inputValue;
  int pirState;

  MyPir(int _ledPin, int _inputPin, int _pirState) {
    ledPin = _ledPin;
    inputPin = _inputPin;
    pirState = _pirState;

    inputValue = 0;
  }

  void setOutput();

  void setInput();

  void readInput();

  void changeLEDState(int signal);
};

void MyPir::setOutput() {
  pinMode(ledPin, OUTPUT); // declare LED as output
}

void MyPir::setInput() {
  pinMode(inputPin, INPUT); // declare sensor as input
}

void MyPir::readInput() {
  inputValue = digitalRead(inputPin); // read input value
}

void MyPir::changeLEDState(int signal) {
  digitalWrite(ledPin, signal); // change LED based on signal
}

MyPir myPir(13, 7, LOW);

void setup() {
  myPir.setOutput();
  myPir.setInput();

  Serial.begin(9600);
}

void loop() {
  myPir.readInput();

  if (myPir.inputValue == HIGH) { // check if the input is HIGH
    myPir.changeLEDState(HIGH);   // turn LED on

    if (myPir.pirState == LOW) {

      // we have just turned on

      Serial.println("Motion detected!");

      // We only want to print on the output change, not state

      myPir.pirState = HIGH;
    }
  } else {
    myPir.changeLEDState(LOW); // turn LED off

    if (myPir.pirState == HIGH) {

      // we have just turned off

      Serial.println("Motion ended!");

      // We only want to print on the output change, not state

      myPir.pirState = LOW;
    }
  }
}
