#include "reales.h"
#include <iostream>
using namespace std;

Reales::Reales(){
	for(int i = 0; i < 30; i++){
		num[i] = '\0';
		numero = 0;
	}
}
void Reales::Guardar_Dato(float x, int y){
	if(y >= 0 && y < 30){ 
		num[y] = x;
	}
}

float Reales::promedio(){
	float n;
	n = 0;
	for (int i = 0; i <= 27; i++){
		if(i % 3 == 0){
			n = n + num[i];
		}
	}
	return n/10;
}

float Reales::mayor(){
	float n;
	n = 0;
	for (int i = 0; i < 20; i++){
		if(num[i] > n){
			n = num[i];
		}
	}
	return n;
}

void Reales::positivos(){
	int acumulador = 0;
	for (int i = 0; i < 30; i++){
		if(num[i] > 0){
			acumulador++;
		}
	}
	cout << "\nLa cantidad de positivos es: " << acumulador << endl;
}