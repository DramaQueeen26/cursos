#include "arreglito.h"
#include <iostream>
using namespace std;

Arreglito::Arreglito(){
	for(int w = 0; w < 20; w++){
		letras[w] = '\0';
		numero = 0;
	}
}

void Arreglito::Guardar_Dato(char x, int y){
	if(!(y < 0 || y > 19)) letras[y] = x;
}

void Arreglito::Cargar_Datos(){
	int w = 65;
	int u = 0;

	while(u < 10){
		letras[u] = (char) w;
		u++; w = w + 2;
	}
	w = 66;

	while(u < 20){
		letras[u] = (char) w;
		u++; w = w + 2;
	}
}

void Arreglito::Mostrar_Datos(){
	cout << endl << endl;
	for (int q = 0; q < 20; q++){
		cout << letras[q] << " ";
		cout << endl << endl;
	}
}

void Arreglito::Proc_Uno(){
	for (int k = 0; k < 20; k = k + 3){
		cout << letras[k] << " ";
		cout << endl << endl;
	}
}

void Arreglito::Proc_Dos(){
	int g = 0; char s;
	while (g < 10){
		s = letras[g];
		letras[g] = letras[19 - g];
		letras[19 - g] = s;
		g++;
	}
}

char Arreglito::Func_Uno(char x, int y){
	int posicion, contador;
	contador = 0;

	if(y >= 1 && y <= 3){
		for(int i = 0; i <= 20; i++){
			if(x == letras[i]){
				posicion = i;
				contador++;
			}
			if(contador == y){
				cout << "La posicion de " << x << " es " << posicion << endl;
				break;
			}
		}
	}
	
	return posicion;
}

int Arreglito::Func_Dos(char w){
	int contador = 0;
	for(int i = 0; i <= 20; i++){
		if(w == letras[i]){
			contador += 1;
		}
	}
	cout << "La cantidad de veces que aparece " << w << " en el arreglo es: " << contador << endl;

	return contador;
}