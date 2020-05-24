
/*
francisco morales
MICROPROGRAMACION 2020
*/

#include "arduino.h"
#include "robot-car-arduino.h"
/* **************************************
**      CLASE ULTRASONIDO
************************************** */
//Ultrasonido::Ultrasonido(){}
Ultrasonido::Ultrasonido(byte *_pinTrigger, byte *_pinEcho){
    pinTrigger=_pinTrigger;
    pinEcho = _pinEcho;
    pinMode(*pinTrigger,OUTPUT);
    pinMode(*_pinEcho, INPUT);
}


Ultrasonido::Ultrasonido(){} //constructor
// hace medicion
int Ultrasonido::medirCM{
    digitalWrite(*pinTrigger, LOW);
    digitalMicroseconds(4);
    digitalWrite(*pinTrigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(*pinTrigger, LOW);

    distancia=pulseIn(*pinEcho, HIGH)/56.5812;
    distancia=constrain(distancia,0,350);
    return (int) distancia;
}
