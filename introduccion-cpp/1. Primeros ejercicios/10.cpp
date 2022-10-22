//Potencias de números


#include <iostream>
#include <string>
using namespace std;

float matematica(int numero, float numero2);
int numero;
float numero2, resultado, i;

int main(){
	cout << "Tipee un numero entero: " << endl; cin >> numero;
	cout << "Tipee un numero real: " << endl; cin >> numero2;

	matematica(numero, numero2);
}

float matematica(int numero, float numero2){
	resultado = 1;
	for(i = 1; i<= numero; i++){
		resultado = resultado*numero2;
	}

	cout << "El resultado del número " << numero2 << " elevado al " << numero << " es: " << resultado;
	return resultado;
}