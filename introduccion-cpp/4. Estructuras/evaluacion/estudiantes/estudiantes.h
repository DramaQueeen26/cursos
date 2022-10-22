#include <string>
using namespace std;

struct fecha{
    int dia, mes, anio;
};

struct poderes{
    string nombre;
    char tipo;
    int nivel;
};

struct datos{
    string nombre, alias;
    fecha nacimiento;
    char sexo, egresado;
    int cantidad_poderes;
    poderes registro_poderes[5];
};

class estudiantes{
    private:
        datos registro_estudiantes[100];
        int maximo;
    public:
        estudiantes();
        void registro_datos(datos x);
        void lista_egresados();
        void datos_estudiante(string alias);
        int cantidad_2010();
        int cantidad_lvl5();
        void total_mujeres();
};
