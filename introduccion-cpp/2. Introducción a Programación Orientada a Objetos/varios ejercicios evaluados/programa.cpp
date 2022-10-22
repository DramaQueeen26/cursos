#include "programa.h"
#include <iostream>
#include <string>
using namespace std;

programa::programa(){
	numero = 0;
	numero2 = 0;
}

void programa::nombreCompleto(){
	cout << "Ingrese su nombre completo: "; 
	getline(cin, nombre);
	int caracter;
	caracter = nombre.length();
	cout << "La cantidad de caracteres pulsados son: " << caracter << endl;
}

int programa::minutos(int m, int s){
	int faltante, mfaltante, sfaltante, mAs;
	if(m >= 0 && m < 60){
		if(s >= 0 && s <= 60){
			mfaltante = 60-m;
			sfaltante = 60-s;
			mAs = mfaltante*60;
			faltante = (mAs+sfaltante)-60;

			cout << "Faltan " << faltante << " segundos para llegar a la hora" << endl;

		}else{
			cout << "Error.";
		}
	}else{
		cout << "Error.";
	}
	return faltante;
}

int programa::divisores(int numero){
	int i;
	cout << "Los divisores son: ";
	for(i = 1; i <= numero; i++){
		if(numero%i == 0){
			if(i == 2 || i == 3 || i == 5 || i == 7 || i == 11 || i == 13 || i == 17 || i == 19 || i == 23 || i == 29){
				cout << i << " "; 
			}
		}
	}
	cout << "\n";

	return i;
}

void programa::menor(int numero, int numero2){
	int producto = numero*numero2;
	if(numero < numero2){
		cout << "El menor es: " << numero;
	}else if(numero == numero2){
		cout << "Los dos son iguales";
	}else{
		cout << "El menor es " << numero2;
	}
	cout << " y el cuadrado del producto de los dos numeros es: " << producto*producto << endl;
}

void programa::rif(){
	char let, letra;
	string numAletra;
	cout << "\nIngresa la letra de su RIF: ";
	cin >> let;
	letra = toupper(let);
	while(letra != 'V' && letra != 'E' && letra != 'J' && letra != 'R' && letra != 'M' && letra != 'C' && letra != 'G'){
		cout << "Error. Ingrese una letra valida " << endl;
		cin >> let;
		letra = toupper(let);
	}
	cout << "Ingrese los 8 digitos de su RIF: " << endl;
	cin >> numero;
	numAletra = to_string(numero);
	while(numAletra.length() != 8){
		cout << "Error. Ingresa los digitos correctamente " << endl;
		cin >> numero;
	numAletra = to_string(numero);
	}
	
	cout << "Su RIF es: " << letra << "-" << numero << endl;
}

int programa::menu(){
	cout << "\n \nElija una opcion y pulse enter: " << endl;
	cout << "\n 1.  Un procedimiento en el que se lee el nombre completo de una persona, y me muestra por consola la cantidad de caracteres pulsados." << endl;
	cout << "\n2.  Una funcion en la que se lee por consola una cantidad de minutos y segundos, y me devuelva en un numero entero la cantidad de segundos faltantes para llegar a una hora." << endl;
	cout << "\n3.  Una funcion en la que se lee por cónsola un numero entero (entre 1 y 100) y devuelva la cantidad de los divisores que tenga el mismo" << endl;
	cout << "\n4.  Un procedimiento que recibe de parametros dos numeros enteros y devuelva cual es el menor de ambos, o ninguno si ambos son iguales, y luego mostrar el cuadrado del producto de los mismos." << endl;
	cout << "\n5.  Un procedimiento en el que se efectue la lectura de una RIF, pidiendo por consola primero una letra (V-E-J-R-M-C-G) y un numero de ocho digitos, validando las lecturas debidamente. \n" << endl;
	cin >> numero;

	while(numero > 5 || numero <= 0){
		cout << "Tiene que escoger un numero que este en el menu de opciones: ";
		cin >> numero;
	}

	cout << "Ha escogido la opcion " << numero << endl;

	return numero;
}
