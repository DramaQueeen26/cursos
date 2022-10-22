//Pedir por consola tres numeros reales y mostrar cual es el mayor y cual es el menor


#include <iostream>
#include <string>
using namespace std;

void numero_R(float num1, float num2, float num3);

float num1, num2, num3;
string valor;

int main(){
	cout << "Introduzca un numero real" << endl; cin >> num1; 
	cout << "Introduzca otro numero real" << endl; cin >> num2; 
	cout << "Introduzca otro numero real" << endl; cin >> num3; 
	cout << "Introduzca un valor (mayor o menor): " << endl; cin >> valor;

	while(valor != "mayor" && valor != "menor"){
		cout << "Introduzca un valor correcto (mayor o menor): " << endl; cin >> valor;
	}

	numero_R(num1, num2, num3);
	return 0;
}

void numero_R(float num1, float num2, float num3){
	if(valor == "mayor"){
		if(num1 > num2 && num1 > num3){
			cout << "El numero mayor es " << num1;
		}else if(num2 > num1 && num2 > num3){
			cout << "El numero mayor es " << num2;
		}else if(num3 > num1 && num3 > num2){
			cout << "El numero mayor es " << num3;
		}
	}else{
		if(num1 < num2 && num1 < num3){
			cout << "El numero menor es " << num1;
		}else if(num2 < num1 && num2 < num3){
			cout << "El numero menor es " << num2;
		}else if(num3 < num1 && num3 < num2){
			cout << "El numero menor es " << num3;
		}
	}
}