//*Desarrolle un programa en el que se maneje por medio de una clase, un arreglo de 30 pares
//*de puntos situados en el eje cartesiano, es decir, duplas de números reales X y Y.

//*La clase debe plantear los siguientes métodos:

//** Registrar los pares en el arreglo.
//** Devolver la cantidad de puntos que están situados en el Tercer Cuadrante del eje cartesiano.
//** Mostrar por cónsola los puntos situados en el eje de las Y.
//** Listar por cónsola todos los puntos registrados, mostrando además la distancia de ellos referente al punto (0,0)

#include "Cartesiano.h"
#include <iostream>
using namespace std;

Cartesiano aja;
numcar numeros;

int main(){
    setlocale(0,"SPANISH");
    numeros.x=1; numeros.y=-6; numeros.ch='C';
    aja.registrar(numeros);
    numeros.x=-4; numeros.y=-20; numeros.ch='H';
    aja.registrar(numeros);
    numeros.x=0; numeros.y=-16; numeros.ch='V';
    aja.registrar(numeros);
    numeros.x=-7; numeros.y=-9; numeros.ch='B';
    aja.registrar(numeros);
    aja.lista();
    cout<<"\nLa cantidad de puntos ubicados en el tercer cuadrante es de: "<<aja.cuadrante3()<<".\n";
    aja.situadosY();
    return 0;
}
