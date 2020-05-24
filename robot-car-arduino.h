/*
  Libreria de RobotCar
Universidad de El Salvador, Sede Santa Ana
ciclo I-2019   DEFINA LAS SIGUIENTES CLASES
+ Francisco javier morales
- indicam miembro privado
+ miembro : tipodedatos
*/


/*************************    
	Clase Ultrasonido
**************************
- distancia : long
+ pinEcho : byte*
+ pinTrigger: byte*
**************************
+ medirCM() : int
+ Ultrasonido(byte*,byte*)
****************************/


/*
  Libreria de RobotCar
Universidad de El Salvador, Sede Santa Ana
ciclo I-2019   DEFINA LAS SIGUIENTES CLASES
+ inidica miembro publico
- indicam miembro privado
+ miembro : tipodedatos
*/
#ifndef robot-car-arduino_h
#define robot-car-adrduino_h
#include "arduino.h"
/*************************    
	Clase Ultrasonido
**************************
- distancia : long
+ pinEcho : byte*
+ pinTrigger: byte*
**************************
+ medirCM() : int
+ Ultrasonido(byte*,byte*)
****************************/
class Ultrasonido {
	private:
		long distancia
	public:
		byte *pinEcho;
		byte *pinTrigger; 
	/**
	 * Constructor parametrizado
	 * **/
	Ultrasonido(byte *_pinTrigger, byte *_pinEcho);
	Ultrasonido(); // constructor
	/*******
	 * Método para medir como limite 3.5m(350cm)
	********/
	int medirCM();
};
#endif