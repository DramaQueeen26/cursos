//Calculadora básica


#include <iostream>
#include <string>
using namespace std;

void matematica(int numero, int numero2, char operacion);
int numero, numero2, resultado;
char operacion;

int main(){
	cout << "Coloque un numero: " << endl; cin >> numero;
	cout << "Coloque otro numero: " << endl; cin >> numero2;
	cout << "Cual signo de operacion matematica quiere (+, -, *, /): " << endl; cin >> operacion;

	while(operacion != '+' && operacion != '-' && operacion != '/' && operacion != '*'){
		cout << "Coloque un signo de operación matemática correcto " << endl; cin >> operacion;
	}

	matematica(numero, numero2, operacion);
}

void matematica(int numero, int numero2, char operacion){
	if(operacion == '+'){
		resultado = numero + numero2;
	}else if(operacion == '-'){
		resultado = numero - numero2;
	}else if(operacion == '*'){
		resultado = numero * numero2;
	}else{
		resultado = numero / numero2;
	}

	cout << "El resultado es: " << resultado;
}