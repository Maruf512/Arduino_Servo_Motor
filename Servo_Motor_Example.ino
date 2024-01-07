//Include the Arduino stepper library
#include <Stepper.h>

//Set how many steps it takes to make a full revolution
//Devide the degrees per step by 360 to get the steps
const int stepsPerRevolution = 2048;

//Use pin 8-11 to IN1-IN4

Stepper X_Axis = Stepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {

  //Set the RPM of the stepper motor
  X_Axis.setSpeed(5);

}

void loop() {

    //This should make the stepper do a full 360 degrees
    X_Axis.step(stepsPerRevolution);
    
}
