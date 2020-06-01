#include <robot-car-arduino.h>
Carro Carrito;
int detener=3;
int giro=90;
void void setup()
{
    Carrito.potenciaMAX=150;
}
void void loop()
{
    if (Carrito.UltraC.MedirCM()>detener)
    {
        Carrito.mover(10,10);
    }else
    {
        Carrito.mover(0,0);
        delay(100);
        if (Carrito.UltraI.MedirCM()>Carrito.UltraD.MedirCM())
        {
          Carrito.girar(giro);
        }
        else
        {
            Carrito.girar(-1*giro);
        }
        
        
    }
    
    
    
}