#include <robot-car-arduino.h>
Carro m1;

void setup()
{
}

void loop()
{

  m1.mover(10, 10); //moverse hacia adelante
  delay(3000);
  m1.mover(-10, -10); //moverse hacia atras
  delay(3000);
  m1.mover(-10, 0); //se mueve solo la llanta izquierda hacia atras
  delay(3000);
  m1.mover(0, -10); //se mueve solo la llanta derecha hacia atras
  delay(3000);
  m1.mover(-10, -10); //ambas llantas hacia atras
  delay(3000);
  m1.mover(-5, -5); //ambas llantas hacia atras con una potencia de 125
  delay(3000);
}