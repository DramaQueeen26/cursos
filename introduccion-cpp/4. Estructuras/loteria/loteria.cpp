#include "loteria.h"

loteria::loteria(){
    date fecha;
    fecha.day = 1; fecha.month = 1; fecha.year = 2020;
    time hora;
    hora.hour = 0; hora.minutes = 0; hora.seconds = 0;

    for(int x = 0; x < 100; x++){
        lot[x].signo_zodiacal = '\n';
        lot[x].numero_obtenido = 0;
        lot[x].monto_total = 0;
        lot[x].dia_sorteo = fecha;
        lot[x].hora_sorteo = hora;
    }
    maximo = -1;
}

loteria::guardar_datos(data x){
    if(maximo < 99){
        maximo++;
        lot[maximo] = x;
    }else{
        cout << "Esta al limite " << endl;
    }
}

