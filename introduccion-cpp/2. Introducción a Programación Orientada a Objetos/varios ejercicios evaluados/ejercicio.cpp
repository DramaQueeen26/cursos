/*

DESARROLLE UN PROGRAMA ENFOCADO EN UNA CLASE, ES DECIR, CON UN ARCHIVO DE 

ENCABEZADO .h Y UN ARCHIVO DE CÓDIGO .cpp, QUE CONTENGA LOS SIGUIENTES 

MÓDULOS:

1. Un procedimiento en el que se lee el nombre completo de una persona, y me muestra por cónsola la 

cantidad de caracteres pulsados.

2. Una función en la que se lee por cónsola una cantidad de minutos y segundos, y me devuelva en un 

número entero la cantidad de segundos faltantes para llegar a una hora. Las cantidades que expresan los 

minutos y segundos deberán estar validadas para efectuar el còmputo, de lo contrario me enviará un mensaje 

de error por cónsola y me devuelve el valor -1. (La lectura de ambas cantidades se realizan fuera de la 

función, y se enviarán como parámetros).

3. Una función en la que se lee por cónsola un número entero (entre 1 y 100) y devuelva la cantidad de los 

divisores que tenga el mismo, considerando entre los posibles el 2, 3, 5, 7, 11, 13, 17, 19, 23, 29. Por ejemplo, si 

el número leído es el 44, la cantidad de divisores son 2 (el 2 y el 11). El número tendrá validación respectiva.

4. Un procedimiento que recibe de parámetros dos números enteros y devuelva cuál es el menor de ambos, o 

ninguno si ambos son iguales, y luego mostrar el cuadrado del producto de los mismos.

5. Un procedimiento en el que se efectue la lectura de una RIF, pidiendo por cónsola primero una letra (V-E-

J-R-M-C-G) y un número de ocho dígitos, validando las lecturas debidamente.

6. Una función que plasme un menú de opciones mostrando por cónsola los aspectos anteriores, y permita 

escoger al usuario uno de ellos, retornando en un número entero la opción seleccionada.


*/


#include "programa.cpp"
#include <iostream>
using namespace std;

programa llamarF;
int m, s, num, num1, num2;

int main(){
	//Ejercicio 1
	llamarF.nombreCompleto();

	//Ejercicio 2
	cout << "\nIngresa los minutos: ";
	cin >> m;
	while(m < 0 || m >= 60){
		cout << "Error, vuelve a introducir los minutos correctamente: ";
		cin >> m; 
	}
	cout << "Ingresa los segundos: ";
	cin >> s;
	while(s < 0 || s >= 60){
		cout << "Error, vuelve a introducir los segundos correctamente: ";
		cin >> s; 
	}
	llamarF.minutos(m, s);

	//Ejercicio 3
	cout << "\nIngrese un numero entre 1 y 100: ";
	cin >> num;
	while(num <= 0 || num > 100){
		cout << "Error. Ingresa un numero entre 1 y 100: ";
		cin >> num;
	}
	llamarF.divisores(num);

	//Ejercicio 4
	cout << "\nIngrese un numero: ";
	cin >> num1;
	cout << "Ingrese otro numero: ";
	cin >> num2;
	llamarF.menor(num1, num2);

	//Ejercicio 5
	llamarF.rif();

	//Ejercicio 6
	llamarF.menu();

	return 0;
}

