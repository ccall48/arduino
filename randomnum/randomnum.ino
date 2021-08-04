/*
initialise serial connection with baudrate 9600.
generate random number, check if number we are looking for is
generated with each for loop and output response to serial.
*/

int delayTime = 500;
int delayCorrect = 5000;
int numRange = 100;
long randNum;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  randNum = random(numRange);
  if(randNum == 50) {
    //Serial.print("* * * * * ");
    //Serial.print(randNum);
    //Serial.println(" * * * * *");
    Serial.println("* * * * * "+(String)randNum+" * * * * *");
    delay(delayCorrect);
  }
  else {
    //Serial.print("Try again... ");
    //Serial.print(randNum);
    //Serial.println(" is incorrect.");
    Serial.println("Try again... "+(String)randNum+" is incorrect.");
  }
  delay(delayTime);
}
