#include<robot-car-arduino.h>
Carro carrito;
int detener=3;
int giro=-90;
 
void setup(){
    //configuraciones del carro
    carrito.potenciaMAX=150; //velocidad del carro

}

void loop(){
    //si la estructura del sensor central es mayor a los cms para detener pues avanzamos
    if(carrito.UltraC.medirCM()>detener){
        //mover carro hacia delante
        carrito.mover(10,10);
    }else{
        //detener carro 
        carrito.mover(0,0);
        delay(100);
        //evaluar con los sensores el lado despejado
        if(carrito.UltraI.medirCM()>carrito.UltraD.medirCM()){
            // si tengo la apertura a la izquierda
            carrito.girar(giro);
            //si no tengo contadores de vuelta
            //carrito.mover(-10,10);
            //delay(1000);
        }else{
            //giro a la derecha
            carrito.girar(-1*giro);
            //si no tengo contadores de vuelta
            //carrito.mover(10,-10);
            //delay(1000);
        }
    }

}