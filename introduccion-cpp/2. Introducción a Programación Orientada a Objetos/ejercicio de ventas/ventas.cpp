#include "ventas.h"
#include <iostream>
using namespace std;

Ventas::Ventas(){


}

void Ventas::guardar(float valor, int dia){
	if(dia >= 1 && dia <= 28){
		dias[dia-1] = valor;
	}
}

int Ventas::dias_sin_ventas(){
	int i, contador;
	contador = 0;

	for(i = 0; i <= 27; i++){
		if(dias[i] <= 0){
			contador += 1;
		}
	}
	return contador;
}

void Ventas::promedio_ventas(){
	int i; 
	float suma;
	suma = 0;

	for(i = 0; i <= 27; i++){
		suma = suma + dias[i];
	}

	cout << "\nEl promedio de ventas de las 4 semanas es: " << (suma/28) << "$" << endl;
}

void Ventas::mejor_dia(){
	int i, v, dia;
	v = 0;

	for(i = 0; i <= 27; i++){
		if(dias[i] > v){
			v = dias[i];
			dia = i;
		}
	}

	cout << "\nEl mejor dia de ventas fue el dia " << dia+1 << " y se hicieron " << v << "$" << endl;
}

void Ventas::ventas_80(){
	int i;

	for(i = 0; i <= 27; i++){
		if(dias[i] <= 80){
			cout << i+1 << " ";
		}
	}
	
}