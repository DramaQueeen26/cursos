#include "notas.h"
#include <iostream>
using namespace std;

Notas::Notas(){
}

void Notas::guardar(int valor, int posicion){
	if(posicion >= 0 && posicion < 6){
		nota[posicion] = valor;
	}
}

void Notas::mostrar(){
	int n = nota[0];

	for(int i = 0; i < 6; i++){
		if(nota[i] > n){
			n = nota[i];
		}
	}
	cout << "\nSu mayor nota es: " << n << endl;
}

int Notas::notas_aprobadas(){
	int contador = 0;
	for(int i = 0; i < 6; i++){
		if(nota[i] > 9){
			contador = contador + 1;
		}
	}
	return contador;
}

int Notas::eficiencia(){
	int e = 1;
	for(int i = 0; i < 6; i++){
		
		if(nota[i] < 10){
			e = 0;
		}
	}

	return e;

}

void Notas::promedio(){
	float n = 0;
	for(int i = 0; i < 6; i++){
		n = n + nota[i];
	}

	cout << "\nEl promedio entre las 6 notas es: " << (n/6) << endl;
}