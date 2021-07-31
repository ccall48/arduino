int switchState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == HIGH) {
    Serial.println("Door Open: "+(String)switchState);
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(4, LOW);
    delay(250);
    Serial.println("Door Closed");
  }
}
