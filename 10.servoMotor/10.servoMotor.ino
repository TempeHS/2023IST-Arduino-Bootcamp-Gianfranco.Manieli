/*
  Author: 
  Learning Intention: The students will learn how to connect and control a servo motor.
  Success Criteria:
    1. I understand how to connect the servo motor
    2. I can manually write different degrees of movement to the servo
    3. I can map a potentiometer to a servo and control its movement
    4. I understand that a 180deg servo angle of movement is set by a frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/10.servoMotor/Bootcamp-servoMotor.png
*/

#include <Servo.h>

//create servo object
Servo myServo;

// servo attach to pin
unsigned static int myServoPin = 8;

void setup() {
// setup and debug silly monitor
  Serial.begin(9600);
  Serial.println("sm working yipee");
  Serial.println("-----------------------");

  //configure servo to pin
  myServo.attach(myServoPin);
}

// The loop function runs over and over again forever
void loop() {
  int val = 100;
  myServo.write(val);
  delay(15);

  //make servo go 180 degrees
  for (int i=0; i < 180 1++;) {
    myServo(i);
    delay(15);
  }

  for (int y = 180; y >= 0; y-- ) {
    myServo.write(y);
    delay(15);
  }
}
