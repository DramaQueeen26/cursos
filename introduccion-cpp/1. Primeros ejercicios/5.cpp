//Pedir por consola si el usuario es extrangero o venezolano y también su C.I (sin puntos)


#include <iostream>
#include <string>
using namespace std;

void identidad();
void validacion();
char letra;
int cedula;

int main(){
	identidad();
	validacion();

	if(letra == 'V'){
		cout << "Usted es venezolano y su cedula es: " << cedula << endl;
	}else{
		cout << "Usted es extranjero y su cedula es: " << cedula << endl;
	}
	return 0;
}

void identidad(){
	cout << "Introduzca si es venezolano o extranjero (V/E)" << endl;
	cin >> letra;
	cout << "Introduzca su cedula de identidad (sin puntos)" << endl;
	cin >> cedula;
}

void validacion(){
	while(letra != 'V' && letra != 'E'){
		cout << "Incorrecto. Coloque si es venezolano (V) o extranjero (E): "; cin >> letra;
	}
	while(cedula == 0){
		cout << "Coloque una cedula correcta, sin puntos: " << endl; cin >> cedula;
	}
}