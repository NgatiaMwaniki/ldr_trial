
 int LDR_Pin = A0; // what pin on the arduino is the LDR output connected to
  
  void setup(){
  Serial.begin(9600);
  Serial.println("LDR Light Sensor ");
  }
  
  void loop()
  {
  Serial.println(analogRead(LDR_Pin));
   
  delay(3000);
  
    String ADCData, station, postData;
   
  int adcvalue=analogRead(LDR_Pin);  //Read Analog value of LDR
   
   ADCData = String(adcvalue);   //String to interger conversion
   
    station = "A";
    
  }
