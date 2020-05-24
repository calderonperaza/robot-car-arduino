#include <robot-car-arduino.h>

Carro carrito;
int detener = 3;
int giro = 90;

void setup() {
  carrito.potenciaMax = 150;
}

void loop() {

    //si la letura del sensor central es mayor a los cms
  if (carrito.UltraC.medirCM() > detener) {
      carrito.mover(10,10);
      else
      {
          carrito.mover(0,0);
          delay(100);
                }
      
if (carrito.UltraI.medirCM >carrito.UltraD.medirCM(){

    carrito.girar(-90);

}

else{
    carrito.girar(-1*giro);
}

  