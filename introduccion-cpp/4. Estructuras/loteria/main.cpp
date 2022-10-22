/*Desarrolle un programa que maneje por medio de una clase, los datos relacionados a los sorteos de un lotería,
 la cual lleva cada dato del sorteo de la manera siguiente: Fecha del Sorteo, Hora del Sorteo,
 Número obtenido (de 3 cifras), Signo Zodiacal, y monto que se lleva el ganador (mínimo 1500 máximo 50000).
 El total de sorteos máximo a manejar por la clase será de 100.

La clase debe plantear los métodos:

* Registrar datos del sorteo (datos debidamente validados)
* Mostrar por cónsola los sorteos efectuados en una fecha determinada, recibiendo dicho día como parámetro.
* Devolver la cantidad de sorteos cuyo signo zodiacal haya sido "Escorpio" o "Tauro"
* Devolver el monto acumulado de los sorteos cuyo número ganador esté entre 300 y 699.

Es requisito indispensable que la fecha y hora del sorteo se manejen como estructuras independientes.
*/

#include "Loteria.h"
#include <iostream>

using namespace std;
Loteria aja;
d_sorteo DATOSSOR;
fecha MA;

int main(){
    MA.A=2020; MA.D=9; MA.M=9;
    setlocale(0,"SPANISH");
    DATOSSOR=aja.validar_datos();
    aja.Registro(DATOSSOR);
    DATOSSOR=aja.validar_datos();
    aja.Registro(DATOSSOR);
    aja.Mostrar_datos(MA);
    cout << endl << "La cantidad de sorteos cuyo signo zodiacal fueron \"Escorpio\" o \"Tauro\" es de: " << aja.cant_esc_tau()<<endl;
    cout << endl << "El monto acumulado de los sorteos cuyo número ganador está entre 300 y 699 es de: " << aja.Monto300_699()<<endl;
    return 0;
}
