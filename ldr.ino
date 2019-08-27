 // Example Sketch for LDR (Light Dependent PhotoResistor). It reads the
 // voltage at the LDR_Pin and displays it on the console. The value should
 // range from 0 to 1024. The lower the value the lower the light. The higher
 // the value means more light being received by the LDR.
 // Written by cactus.io. For more details and how to hookup the LDR to the Arduino
 // then visit this link.
 // http://cactus.io/hookups/sensors/light/ldr/hookup-arduino-to-ldr-sensor
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11);
 int LDR_Pin = A0; // what pin on the arduino is the LDR output connected to
  
  void setup(){
  Serial.begin(9600);
  Serial.println("LDR Light Sensor Example Sketch | cactus.io");
  }
  
  void loop(){
  Serial.println(analogRead(LDR_Pin));
  delay(3000);
  
    String ADCData, station, postData;
  int adcvalue=analogRead(LDR_Pin);  //Read Analog value of LDR
  ADCData = String(adcvalue);   //String to interger conversion
  station = "A";
    
  }
