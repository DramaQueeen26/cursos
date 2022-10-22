#include "estudiantes.h"
#include <iostream>
#include <string>
using namespace std;

estudiantes llamarF;
datos registro;

int contador = 0;

main(){
	for(int i = 0; i < 100; i++){
		cout << "Ingrese su nombre: ";
		cin.ignore();
		getline(cin, registro.nombre);
		cout << "Ingrese su alias: "; cin >> registro.alias;
		cout << "Ingrese el dia que nacio: "; cin >> registro.nacimiento.dia;
		while(registro.nacimiento.dia <= 0 || registro.nacimiento.dia > 31){
			cout << "Ingrese un dia correcto: "; cin >> registro.nacimiento.dia;
		}
		cout << "Ingrese el mes que nacio: "; cin >> registro.nacimiento.mes;
		while(registro.nacimiento.mes <= 0 || registro.nacimiento.mes > 12){
			cout << "Ingrese un mes correcto: "; cin >> registro.nacimiento.mes;
		}
		cout << "Ingrese el anio que nacio: "; cin >> registro.nacimiento.anio;
		while(registro.nacimiento.anio <= 1930 || registro.nacimiento.anio > 2020){
			cout << "Ingrese un anio correcto: "; cin >> registro.nacimiento.anio;
		}
		cout << "Ingrese su sexo (F/M): "; cin >> registro.sexo;
		while(registro.sexo != 'F' && registro.sexo != 'M'){
			cout << "Ingrese su sexo correcto: "; cin >> registro.sexo;
		}
		cout << "Ingrese si es egresado o no (S/N): "; cin >> registro.egresado;
		while(registro.egresado != 'S' && registro.sexo != 'N'){
			cout << "Ingrese la letra correcta: "; cin >> registro.egresado;
		}
		cout << "Ingrese la cantidad de poderes que posee(del 1 al 6): "; cin >> registro.cantidad_poderes;
		while(registro.cantidad_poderes < 1 || registro.cantidad_poderes > 6){
			cout << "Ingrese la cantidad correcta: "; cin >> registro.cantidad_poderes;
		}
		do{
			cout << "Ingrese el nombre de su poder " << contador+1 << " : "; cin >> registro.registro_poderes[contador].nombre;
			cout << "Ingrese su tipo de poder (F/M): "; cin >> registro.registro_poderes[contador].tipo;
			while(registro.registro_poderes[contador].tipo != 'F' && registro.registro_poderes[contador].tipo != 'M'){
				cout << "Ingrese su tipo de poder correcto (F/M): "; cin >> registro.registro_poderes[contador].tipo;
			}
			cout << "Ingrese su nivel de poder (del 1 al 5): "; cin >> registro.registro_poderes[contador].nivel;
			while(registro.registro_poderes[contador].nivel < 1 || registro.registro_poderes[contador].nivel > 5){
				cout << "Ingrese su nivel de poder correcto (del 1 al 5): "; cin >> registro.registro_poderes[contador].nivel;
			}
			contador ++;
		}while(contador < registro.cantidad_poderes);
		cout << endl;
		llamarF.registro_datos(registro);
	}

	llamarF.lista_egresados();
	cout << "Ingrese el alias del estudiante que desea buscar: "; cin >> registro.alias;
	cout << endl;
	llamarF.datos_estudiante(registro.alias);
	cout << endl;
	cout << "La cantidad estudiantes nacidos antes del 2010 es: " << llamarF.cantidad_2010() << endl;
	cout << endl;
	cout << "La cantidad de estudiantes con poderes en nivel 5 es: " << llamarF.cantidad_lvl5() << endl;
	cout << endl;
	llamarF.total_mujeres();

	return 0;
}
