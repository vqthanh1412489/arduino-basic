#include <Stepper.h>
 
const int stepsPerRevolution = 4096;  // hehe
 
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
 
void setup() {
 
  myStepper.setSpeed(120);
  Serial.begin(9600);
}
 
void loop() {
 
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
 
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
