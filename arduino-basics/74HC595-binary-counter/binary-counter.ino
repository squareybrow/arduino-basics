int latchPin = 11;
int clockPin = 9;
int dataPin = 12;
int dt = 250;

byte LEDs;

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {

    for (LEDs = 0b00000000; LEDs <= 0b11111111; LEDs++) {
    updateShiftRegister(LEDs);
    delay(dt);
  }

  for (LEDs = 0b11111110; LEDs >= 0b00000001; LEDs--) {
    updateShiftRegister(LEDs);
    delay(dt);
  }
}

void updateShiftRegister(byte value) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, value);
  digitalWrite(latchPin, HIGH);
}
