#include <robot-car-arduino.h>
Carro carrito;
int detener=3;
int giro=90;

void set up(){
    //Configuraciones del carro
    carrito.potenciaMAX=150;
}

void loop(){
    if (carrito.UltraC.medirCM() > detener)
    {
        carrito.mover(10,10);
    }else{
        carrito.mover(0,0);
        delay(100);
    }
    if (carrito.UltraI.medirCM()>carrito.UltraI.medirCM() )
    {
        carrito.girar(-90);
    }else
    {
        carrito.girar(-1*giro);
    }
    
    
    
}