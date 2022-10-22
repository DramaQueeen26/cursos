/*

	Guardar los datos de un estudiante, nombre, edad y sección y mostrar:
	-La cantidad estudiantes mayores de 20 en la seccion A
	-Los datos de un estudiante al buscarlo

*/


//Nombre del archivo: ejercicio_estudiantes.cpp
#include <iostream>
#include "estudiantes.cpp"
#include <string>
using namespace std;

Estudiantes estudiantes;

int main(){
	string nombre, nombre2;
	int edad;
	char seccion;
	for(int i = 0; i < 3; i++){
		cout << "Ingrese el nombre: ";
		cin >> nombre;
		cout << "Ingrese la edad: ";
		cin >> edad;
		while(edad < 16 || edad > 50){
			cout << "ERROR. Ingrese la edad correcta: ";
			cin >> edad;
		}
		cout << "Ingrese la seccion: ";
		cin >> seccion; 

		while(!(seccion == 'A' || seccion == 'B' || seccion == 'C')){
			cout << "ERROR. Ingrese la seccion correcta: ";
			cin >> seccion;
		}

		estudiantes.Guardar_Datos(nombre, edad, seccion, i);
	}
	cout << "\nLa cantidad de estudiantes mayores de 20 en la seccion A es: " << estudiantes.mayor_20() << endl;
	cout << endl;
	estudiantes.mostrar_menor();
	cout << "\nIngrese el nombre del estudiante que desea buscar: ";
	cin >> nombre;
	estudiantes.datos(nombre);
	return 0;
}
