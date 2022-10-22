//Imprimir en pantalla un caracter y el numero introducido menos 1


#include <iostream>
#include <string>
using namespace std;
int num(char caracter, int numero);
char caracter;
int numero, i;

int main(){
	cout << "Introduzca un caracter: ";
	cin >> caracter;
	cout << "Introduzca un numero (entre 1 y 10): " << endl;
	cin >> numero;

	if(numero < 1 || numero > 10){
		cout << "Error, el numero esta fuera de rango, debe ser entre 1 y 10";
	}else{
		num(caracter, numero);
	}
	return 0;
}

int num(char caracter, int numero){
	for(i = 0; i <= numero; i++){
		cout << caracter << " ";

		if(i == numero){
			cout << "\nEl numero menos 1 es: " << numero-1 << endl;
		}
	}
	return true;
}