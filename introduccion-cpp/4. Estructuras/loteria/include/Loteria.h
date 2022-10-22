#ifndef LOTERIA_H
#define LOTERIA_H
using namespace std;

struct fecha{
    int D, M, A;
};


struct horas{
    int h, minutes;
};

struct d_sorteo{
    int num_obt;
    char SignoZ;
    float monto;
    fecha sorteo_fecha;
    horas sorteo_hora;
};

class Loteria
{
    public:
        Loteria();
        void Registro(d_sorteo Killme);
        void Mostrar_datos(fecha J);
        int cant_esc_tau();
        float Monto300_699();
        d_sorteo validar_datos();
    private:
        int maxi;
        d_sorteo DATOS_GAN[100];
};

#endif // LOTERIA_H
