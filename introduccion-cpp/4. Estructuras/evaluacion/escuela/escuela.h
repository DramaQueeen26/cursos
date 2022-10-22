#include <string>
using namespace std;

struct fecha{
    int d, m, a;
};

struct talentos{
    string nombre;
    char tipo_poder;
    int nivel_poder;
};

struct datos_estudiantes{
    string nombre, alias;
    fecha fecha_nacimiento;
    char sexo_estudiante, estudiante_egresado;
    int cantidad_poderes;
    talentos poderes[3];
};
class escuela
{
    public:
        escuela();
        void registrar_datos(datos_estudiantes e);
        void listado_general();
        void datos_alias(string alias);
        int cantidad_estudiantes_2001_2005();
        int cantidad_estudiantes_poder();
        int porcentaje_mujeres_mental();

    private:
        datos_estudiantes estudiantes[50];
        int maximo;
};


