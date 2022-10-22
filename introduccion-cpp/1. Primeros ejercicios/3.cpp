//Sacar el factorial de un número


#include <iostream>
#include <string>
using namespace std;

void factorial();

int i, numero, n_factorial;

int main(){
	cout << "Digite un número entre 1 y 15: " << endl; cin >> numero;

	while(numero <= 0 || numero > 15){
		cout << "Ha colocado un número mal. Digite un número entre 1 y 15: " <<endl; cin >> numero;
	}

	factorial();
}

void factorial(){
	n_factorial = 1;
	for(i = 1; i <= numero; i++){
		n_factorial = n_factorial*i;
	}

	cout << "El factorial del numero es " << n_factorial;
}