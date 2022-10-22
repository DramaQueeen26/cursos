#include "escuela.h"
#include <iostream>
#include <string>
using namespace std;

escuela llamar_clase;
datos_estudiantes guardar_datos;



main(){


	for(int x = 0; x < 50; x++){

        int cont = 0;

		cout << "Tipee su nombre: ";

		cin.ignore();

		getline(cin, guardar_datos.nombre);

		cout << "Tipee su alias: "; cin >> guardar_datos.alias;

		cout << "Tipee el dia que nacio: "; cin >> guardar_datos.fecha_nacimiento.d;

		while(guardar_datos.fecha_nacimiento.d < 1 || guardar_datos.fecha_nacimiento.d > 31){

			cout << "Tipee un dia correcto: "; cin >> guardar_datos.fecha_nacimiento.d;

		}

		cout << "Tipee el mes que nacio: "; cin >> guardar_datos.fecha_nacimiento.m;

		while(guardar_datos.fecha_nacimiento.m < 1 || guardar_datos.fecha_nacimiento.m > 12){

			cout << "Tipee un mes correcto: "; cin >> guardar_datos.fecha_nacimiento.m;

		}
		cout << "Tipee el año que nacio: "; cin >> guardar_datos.fecha_nacimiento.a;

		while(guardar_datos.fecha_nacimiento.a < 1950 || guardar_datos.fecha_nacimiento.a > 2021){

			cout << "Tipee un año correcto: "; cin >> guardar_datos.fecha_nacimiento.a;
		}
		cout << "Tipee su sexo (f/m): "; cin >> guardar_datos.sexo_estudiante;

		while(guardar_datos.sexo_estudiante != 'f' && guardar_datos.sexo_estudiante != 'm'){

			cout << "Tipee su sexo correcto: "; cin >> guardar_datos.sexo_estudiante;

		}
		cout << "Tipee si es egresado o no (s/n): "; cin >> guardar_datos.estudiante_egresado;

		while(guardar_datos.estudiante_egresado != 's' && guardar_datos.estudiante_egresado != 'n'){

			cout << "Tipee la letra correcta: "; cin >> guardar_datos.estudiante_egresado;

		}
		cout << "Tipee la cantidad de poderes que tiene(del 1 al 3): "; cin >> guardar_datos.cantidad_poderes;

		while(guardar_datos.cantidad_poderes < 1 || guardar_datos.cantidad_poderes > 3){

			cout << "Tipee la cantidad correcta: "; cin >> guardar_datos.cantidad_poderes;

		}
		do{

			cout << "Tipee el nombre de su poder " << cont+1 << " : "; cin >> guardar_datos.poderes[cont].nombre;

			cout << "Tipee su tipo de poder (f/m): "; cin >> guardar_datos.poderes[cont].tipo_poder;

			while(guardar_datos.poderes[cont].tipo_poder != 'f' && guardar_datos.poderes[cont].tipo_poder != 'm'){

				cout << "Tipee su tipo de poder correcto (f/m): "; cin >> guardar_datos.poderes[cont].tipo_poder;

			}
			cout << "Tipee su nivel de poder (del 1 al 4): "; cin >> guardar_datos.poderes[cont].nivel_poder;

			while(guardar_datos.poderes[cont].nivel_poder < 1 || guardar_datos.poderes[cont].nivel_poder > 4){

				cout << "Tipee su nivel de poder correcto: "; cin >> guardar_datos.poderes[cont].nivel_poder;

			}
			cont++;

		}while(cont < guardar_datos.cantidad_poderes);

		cout << endl;

		llamar_clase.registrar_datos(guardar_datos);
	}

	llamar_clase.listado_general();
	cout << "Tipee el alias del estudiante que desea buscar: "; cin >> guardar_datos.alias;
	cout << endl;
	llamar_clase.datos_alias(guardar_datos.alias);
	cout << endl;
	cout << "La cantidad estudiantes nacidos entre 2001 y 2005 son: " << llamar_clase.cantidad_estudiantes_2001_2005() << endl;
	cout << endl;
    cout << "El porcentaje de mujeres con poderes mentales es: " << llamar_clase.porcentaje_mujeres_mental();

    return 0;
}
