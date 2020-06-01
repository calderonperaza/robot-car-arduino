#include <robot-car-arduino.h>

byte pinEcho=9; //pines

byte pinTrigger=10 //pines 

//Ultrasonido sensor1(&pintTrigger, &pinEcho);
Ultrasonido sensor2; //invocar constructor por defecto

void setup(){
    Serial.begin(9600);
    sensor2= Ultrasonido(&pintTrigger, &pinEcho);
}

void loop(){
  //   Serial.println(sensor1.medirCM());//llamando sensor 1
    Serial.println(sensor2.medirCM());//llamando Sensor 2
    delay(5000);  //tiempo de espera


}