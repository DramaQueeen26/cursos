/*

2. Desarrole una clase que maneje el monto de ventas de una tienda en todos los dias durante cuatro semanas y que me permita:
- Mostrar cuántos días no hubo ventas
- Mostrar el promedio de ventas en las 4 semanas
- Calcular cuál fue el mejor día en ventas
- Buscar en qué día(s) hubo ventas por debajo de 80 $

Al igual que el programa anterior, al momento de ingresar los montos diarios de ventas, deben validarse los valores

*/

#include "ventas.cpp"
#include <iostream>
using namespace std;

Ventas ventas;

int main(){
	int d, dia;
	float monto;
	
	for(d = 1; d <= 28; d++){
		if(d == 1){
			cout << "\nVENTAS DE LA SEMANA 1" << endl;
			dia = 1;
		}
		if(d == 8){
			cout << "\nVENTAS DE LA SEMANA 2" << endl;
			dia = 1;
		}
		if(d == 15){
			cout << "\nVENTAS DE LA SEMANA 3" << endl;
			dia = 1;
		}
		if(d == 22){
			cout << "\nVENTAS DE LA SEMANA 4" << endl;
			dia = 1;
		}
		cout << "Ingrese el total de ventas del dia " << dia << ":";
		cin >> monto;
		ventas.guardar(monto, d);
		dia++;
	}

	
	cout << "\nTodas las ventas fueron guardadas con exito" << endl;

	cout << "\nHubo " << ventas.dias_sin_ventas() << " dias sin ventas" << endl;

	ventas.promedio_ventas();

	ventas.mejor_dia();

	cout << "\nLos dias que hubo ventas por debajo de 80$ son: " << endl;

	ventas.ventas_80();

	return 0;
}
