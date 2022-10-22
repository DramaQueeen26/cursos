/*

	Guardar 30 numeros en un arreglo y mostrar el promedio en las posiciones múltiplos
	de 3 y el número mayor

*/

#include <iostream>
#include "reales.cpp"
using namespace std;

Reales reales;

int main(){
	float numero;
	for(int i = 0; i < 30; i++){
		cout << "Ingrese un numero entre -100 y 100: ";
		cin >> numero;
		while(numero < -100 || numero > 100){
			if(numero < -100 || numero > 100){
				cout << "ERROR. Ingrese un numero entre -100 y 100: ";
				cin >> numero;
			}
		}
		reales.Guardar_Dato(numero, i);
	}

	cout << "El promedio de los numeros en las posiciones multiplo de 3 es: " << reales.promedio() << endl;

	cout << "\nEl numero mayor es: " << reales.mayor() << endl;

	reales.positivos();
}