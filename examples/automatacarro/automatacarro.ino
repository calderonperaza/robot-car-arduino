#include <robot-car-arduino.h>
Carro automata;
int detener = 3;
int giro = 90;

void setup()
{
    automata.potenciaMAX = 150;
}

void loop()
{
    if (automata.UltraC.medirCM() > detener)
    {
        automata.mover(10, 10);
    }
    else
    {
        automata.mover(0, 0);
        delay(100);
        if (automata.UltraI.medirCM() > automata.UltraD.medirCM())
        {
            automata.girar(giro);
        }
        else
        {

            automata.girar(-1 * giro);
        }
    }
}
