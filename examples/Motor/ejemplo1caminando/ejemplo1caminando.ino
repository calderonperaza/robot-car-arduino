#include <robot-car-arduino.h>
Carro carro;

void setup(){
  // no se necesita codigo porque el constructor de la clase configura todo
}

void loop(){
  // put your main code here, to run repeatedly:
  carro.mover(10, 10); //moverse hacia adelante
  delay(3000);
  carro.mover(-10, -10); //moverse hacia atras
  delay(3000);
  carro.mover(-10, 0); //se mueve solo la llanta izquierda hacia atras
  delay(3000);
  carro.mover(0, -10); //se mueve solo la llanta derecha hacia atras
  delay(3000);
  carro.mover(-10, -10); //ambas llantas hacia atras
  delay(3000);
  carro.mover(-5, -5); //ambas llantas hacia atras con una potencia de 125
  delay(3000);
}