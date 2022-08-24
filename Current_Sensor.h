#ifndef Current_Sensor_H
#define Current_Sensor_H

#include "Arduino.h"


class Current_Sensor
{
public:
   char *_version ="1.1";
    //Arduino board 
    Current_Sensor(int model, int vinPin);
	
	// with VCC defined
    Current_Sensor(int model, int vinPin, float vcc);	


	
	/*
	* gets the current 
	*/
    float getCurrent();
	
	//gets the average of current with number iteration i
	float getCurrentAverage(int i);
	
	//prints detailed debugging information about the module
	void debug();
	
	float getVoltage();

	
private:
    /**
     * read current
     */
    float readCurrent();

   int _vin,_model;
   float _vcc, _current,_outVoltage;
   static float _sensitivity[];
   static float _quiescent_Output_voltage [];
   static float _magnetic_offset_error [];   
   
   static char *_modelNames[];

 
};

#endif
