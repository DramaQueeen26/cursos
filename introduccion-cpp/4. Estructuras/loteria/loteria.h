#ifndef LOTERIA_H
#define LOTERIA_H
#include <string>
using namespace std;

struct date{
    int day, month, year;
};

struct time{
    int hour, minutes, seconds;
};

struct data{
    int numero_obtenido, monto_total;
    string signo_zodiacal;
    date dia_sorteo;
    time hora_sorteo;
};
class loteria
{
    private:
        data lot[100];
        int maximo;
    public:
        loteria();
        void guardar_datos(data x);
};

#endif // LOTERIA_H
