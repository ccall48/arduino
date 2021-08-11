/*
  Kit project constructed from following project...
  https://www.jaycar.com.au/medias/sys_master/images/images/9487482093598/XC3754-manualMain.pdf
*/
const int delayOff = 500;
const int delayOn  = 1000;
const int ledPin   = 13; // DIO pin slected to use use

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayOn);
  digitalWrite(ledPin, LOW);
  delay(delayOff);
}
