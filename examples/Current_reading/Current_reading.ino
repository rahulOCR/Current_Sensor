/*
 * 
 * Arduino Sketch for Allegro ACS712 Current Sensor 
 * this sensor is offered at 5A, 20A and 30A range for AC and DC

model select
      //ACS712
      0-"ACS712ELCTR-05B",
      1-"ACS712ELCTR-20A",
      2-"ACS712ELCTR-30A",
      
      //ACS758
      3,// for ACS758LCB-050B
      4,// for ACS758LCB-050U
      5,// for ACS758LCB-100B
      6,// for ACS758LCB-100U
      7,// for ACS758KCB-150B
      8,// for ACS758KCB-150U
      9,// for ACS758ECB-200B
      10,// for ACS758ECB-200U 
      
      ///ACS770
      11,// for ACS770x-050B ///      
      12,// for ACS770x-050U  
      13,// for ACS770x-100B
      14,// for ACS770x-100U
      15,// for ACS770x-150B
      16,// for ACS770x-150U
      17,// for ACS770x-200B  
      18,// for ACS770x-200U  
      

      19 for "ACS732KLATR-20AB",
      20 for "ACS732KLATR-40AB",
      21 for "ACS732KLATR-65AB", 
      22 for "ACS732KLATR-65AU",   
      23 for "ACS732KLATR-75AB", 

      24 for "ACS733KLATR-20AB",
      25 for "ACS733KLATR-40AB",
      26 for "ACS733KLATR-40AU", 
      27 for "ACS733KLATR-65AU",


 */
const int VIN = A0; // define the Arduino pin A0 as voltage input (V in)
const float VCC   = 5.04;// supply voltage
const int MODEL = 18;   // enter the model (see above list)
#include <Current_Sensor.h>

Current_Sensor object(MODEL,VIN);

void setup() {
  
    Serial.begin(9600);
    Serial.println("ACS770 Current Sensor");
	
}

void loop() {


    Serial.print("Current: ");
    Serial.print(object.getCurrent(),3); // print the current with 3 decimal places
    Serial.print("A Avg:");
    Serial.print(object.getCurrentAverage(300),3);//   
    Serial.println("A");
   //object.debug();
   
  delay(1500);
}
 
