
/*
  Author: 
  Learning Intention: The students will learn how to wire a variable resistor as a pseudo sensor and read analogue data from that PIN.
  Success Criteria:
    1. I can wire a variable resistor in TINKERCAD
    2. I know how to read analogue data from a specific PIN
    3. I know the range of analogue data
    4. I can organise output data so it correctly plots on the serial monitor
    5. I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/05.serialRead/Bootcamp-serialRead.png
*/

static unsigned int myVarResistor = A0;
static unsigned int mySound = A1;
static unsigned int myLight = A2;

void setup() {
  Serial.begin(9600);
  Serial.println("serial monitor configured to 9600");
  Serial.println("---------------------");

}

void loop() {
  unsigned int val = analogRead(myVarResistor);
  unsigned int mysound = analogRead(mySound);
  unsigned int mylight = analogRead(myLight);
  Serial.print("PotentiometerValue:");
  Serial.print (val);
  Serial.print (",");
  Serial.println("soundValue:");
  Serial.print(mysound);
  Serial.print (",");
  Serial.println("lightValue:");
  Serial.print(mylight);

}