/*Desarrolle un programa que maneje por medio de una clase, los datos relacionados a los sorteos de un loter�a,
 la cual lleva cada dato del sorteo de la manera siguiente: Fecha del Sorteo, Hora del Sorteo,
 N�mero obtenido (de 3 cifras), Signo Zodiacal, y monto que se lleva el ganador (m�nimo 1500 m�ximo 50000).
 El total de sorteos m�ximo a manejar por la clase ser� de 100.

La clase debe plantear los m�todos:

* Registrar datos del sorteo (datos debidamente validados)
* Mostrar por c�nsola los sorteos efectuados en una fecha determinada, recibiendo dicho d�a como par�metro.
* Devolver la cantidad de sorteos cuyo signo zodiacal haya sido "Escorpio" o "Tauro"
* Devolver el monto acumulado de los sorteos cuyo n�mero ganador est� entre 300 y 699.

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
    cout << endl << "El monto acumulado de los sorteos cuyo n�mero ganador est� entre 300 y 699 es de: " << aja.Monto300_699()<<endl;
    return 0;
}
