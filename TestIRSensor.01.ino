#include <SoftwareSerial.h> //Not sure where to get this if you don't already have it.

SoftwareSerial IRSensor(A3, A3);
int lightSensor_int;

void setup() {
  // put your setup code here, to run once:
  
Serial.begin(9600);


IRSensor.begin(2400);
pinMode(A3, INPUT); //Use these in set up. It's important


}

void loop() {


//This is what should be used for just sensing the light source. IRSensor.read() will return a value of -1 in all cases where it is not looking at a light.
//If it is looking a light, IRSensor.read() will return a diffrent value depending on how long it has been looking at the light. 
//This has something to do with the message the light is outputing. 
//If you just convert each value returned by IRSensor.read() at 2400 baud, you just get capital As. Which kinda makes sense?
//If it turns out you actually have to read the message, I can figure out this a little more. 

lightSensor_int = IRSensor.read(); 
Serial.print(lightSensor_int);    
Serial.print("\n");

}
