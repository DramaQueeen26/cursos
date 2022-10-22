//IMPRIMIR LA PARTE DECIMAL DE UN NUMERO REAL


#include <iostream>
#include <string>
using namespace std;

float num, num2, resultado;
float decimal(float num);
int entero;

int main(){

	cout << "Introduzca un numero real (entre 0 y 99.999)" << endl;
	cin >> num;

	while(num <= 0 || num > 99.999){
		cout << "Error. Introduzca un numero entre 0 y 99.999: " << endl; cin >> num;
	}

	if(num > 0 && num <= 99.999){
		resultado = decimal(num);

		cout << "La parte decimal es: " << resultado;
	}

	return 0;
}

float decimal(float num){
	entero = int(num);
	num2 = num - entero;
	return num2;
}