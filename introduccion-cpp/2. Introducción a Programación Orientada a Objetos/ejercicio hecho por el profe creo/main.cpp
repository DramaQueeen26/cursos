#include <iostream>
#include "arreglito.cpp"
using namespace std;

Arreglito dato;

int main(){
	dato.Cargar_Datos();
	dato.Mostrar_Datos();
	dato.Func_Uno('E', 1);
	dato.Guardar_Dato('X', 14);
	dato.Guardar_Dato('D', 5);
	dato.Guardar_Dato('D', 6);
	dato.Guardar_Dato('D', 7);
	dato.Func_Uno('D', 2);
	dato.Mostrar_Datos();
	dato.Func_Dos('D');
	dato.Proc_Uno();
	dato.Mostrar_Datos();
	dato.Proc_Dos();
	dato.Mostrar_Datos();
	return 0;
}