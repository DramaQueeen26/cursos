//Nombre del archivo: estudiantes.cpp
#include "estudiantes.h"
#include <iostream>
using namespace std;

Estudiantes::Estudiantes(){
}

void Estudiantes::Guardar_Datos(string n, int e, char s, int y){
	if(y >= 0 && y < 40){
		nombre[y] = n;
		edad[y] = e;
		seccion[y] = s;
	}
}

int Estudiantes::mayor_20(){
	int cantidad = 0;
	for(int i = 0; i < 40; i++){
		if(edad[i] > 20 && seccion[i] == 'A'){
			cantidad++;
		}
	}
	return cantidad;
}

void Estudiantes::mostrar_menor(){
	cout << endl << "Estudiantes menores de edad de la seccion B:" << endl;
	for(int i = 0; i < 40; i++){
		if(edad[i] < 18 && seccion[i] == 'B'){
			cout << "\nNombre: " << nombre[i] << " Edad: " << edad[i] << " Seccion: " << seccion[i] << " Posicion: " << i+1 << endl;
		}
	}
}

void Estudiantes::datos(string n){
	bool val = true;
	for(int i = 0; i < 40; i++){
		if(nombre[i] == n){
			cout << "\nNombre: " << nombre[i] << " Edad: " << edad[i] << " Seccion: " << seccion[i] << " Posicion: " << i+1 << endl;
			val = true;
			break;
		}else{
			val = false;
		}
	}

	if(val == false){
		cout << "\nEstudiante no registrado. " << endl;
	}
}

void Estudiantes::mostrar(){
	for(int i = 0; i <= 3; i++){
		cout << nombre[i] << endl;
	}
}