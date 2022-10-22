//Ejercicio número 2. Nombre del archivo: estudiantes.h
using namespace std;
#include <string>

class Estudiantes{
	private:
		string nombre[39];
		int edad[39];
		char seccion[39];
	public:
		Estudiantes();
		void Guardar_Datos(string nombre, int edad, char seccion, int y);
		int mayor_20();
		void mostrar_menor();
		void datos(string n);
		void mostrar();
};