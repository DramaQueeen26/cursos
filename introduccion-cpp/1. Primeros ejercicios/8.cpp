//Introducir por consola un numero par y mostrar el numero impar siguiente y el numero par anterior multiplicado por -1


#include <iostream>
#include <string>
using namespace std;

int numero(int num);
int num, resultado;

int main(){
	cout << "Coloque un numero " << endl; cin >> num;
	numero(num);
}

int numero(int num){
	if(num % 2 == 0){
		resultado = num + 1;
		cout << "El número impar siguiente de " << num << " es " << resultado;
	}else{
		resultado = (num-1)*-1;
		cout << "El número par anterior multiplicado por -1 es " << resultado;
	}
	return resultado;
}