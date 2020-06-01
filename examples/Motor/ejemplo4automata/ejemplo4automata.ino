/*
Este ejemplo que el robot realice las respectivas mediciones
de modo que mueve el robot y lo detiene cuando encuentra un obstaculo, luego gira a la derecha
para evitar el obstaculo y continua su camino.
*/
#include <robot-car-arduino.h>
Carro automata;
int detener = 3;
int giro = 90;

void setup(){
  automata.potenciaMAX = 185;
}

void loop(){
  if (automata.UltraC.medirCM() > detener){
    automata.mover(10, 10);
  }else{
    automata.mover(0, 0);
    delay(500);
    if (automata.UltraI.medirCM() > automata.UltraD.medirCM()){
      automata.girar(giro);
    }else{
      automata.girar(-1 * giro);
    }
    delay(500);
  }
}
