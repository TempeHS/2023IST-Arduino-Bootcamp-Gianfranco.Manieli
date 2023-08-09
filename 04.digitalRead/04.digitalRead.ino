/*
  Author: gianfranco manieli
  Learning Intention: The students will learn how to wire a pull-up and pull-down switch and configure PINs for digital input and read binary data from those PINs.
  Success Criteria:
    1. I understand how to configure a PIN for input
    2. I can wire a switch for digital input in TINKERCAD
    3. I know how to read binary data from a specific PIN
    4. I understand that LOW = false = 0 = <1.5 volts (or Off) and that HIGH = true = 1 = >3 volts (or On)
    5. I know the difference between a switch and a momentary switch
    6. I can organise output data so it correctly plots on the serial monitor
    7. I can apply this knowledge to the Button and the Line Finder in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
    https://docs.arduino.cc/built-in-examples/digital/Debounce
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/04.digitalRead/Bootcamp-digitalRead.png
*/

static unsigned int myLED = 4;
static unsigned int myBuzzer = 3;
static unsigned int myButton = 2;
static unsigned int lineSensor = 7;

void setup() {
  Serial.begin(9600);
  Serial.println("serial monitor is on and configured to 9600 baud");
  Serial.println("--------------------");
  pinMode(myLED, OUTPUT);
  pinMode(myBuzzer, OUTPUT);
  pinMode(myButton, INPUT);
  pinMode(lineSensor, OUTPUT);
}

void loop () {
  int val = digitalRead(myButton);
  int hi = digitalRead(lineSensor);
  Serial.print("myButtonValue:");
  Serial.print(String(val));
  Serial.print(",");
  Serial.print("lineSensor:");
  Serial.println(String(hi));
  if (val){
    // myAlert();
  }
}

void myAlert() {
  digitalWrite(myLED, HIGH);
  // Serial.println("light on buzz on");
  tone(myBuzzer, 128);
  delay(500);
  digitalWrite(myLED, LOW);
  // Serial.println("light off buzz of");
  noTone(myBuzzer);
  delay(5000);
}

  // OPTIMIZED CODE FOR ARDUINO LIGHT FLASH
// static unsigned int onBoardLED = 9;

// void setup() {
//  Serial.begin(9600);
//  pinMode(onBoardLED, OUTPUT);
//  pinMode(13, OUTPUT);
//}

//void loop() {
//  digitalWrite(onBoardLED, HIGH);
//  digitalWrite(13, LOW);
//  delay(500);
//  digitalWrite(onBoardLED, LOW);
//  digitalWrite(13, HIGH);
//  delay(500);
// }
