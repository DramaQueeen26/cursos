#include "estudiantes.h"
#include <iostream>
using namespace std;

estudiantes::estudiantes(){
	int p = 0;
	for(int i = 0; i < 100; i++){
        registro_estudiantes[i].nombre = "";
        registro_estudiantes[i].alias = "";
        registro_estudiantes[i].egresado = '\n';
        registro_estudiantes[i].sexo = '\n';
        registro_estudiantes[i].nacimiento.anio = 0;
        registro_estudiantes[i].nacimiento.mes = 1;
        registro_estudiantes[i].nacimiento.dia = 1;
        registro_estudiantes[i].cantidad_poderes = 0;
        while(p < 6){
            registro_estudiantes[i].registro_poderes[p].nivel = 1;
            registro_estudiantes[i].registro_poderes[p].tipo = '\n';
            registro_estudiantes[i].registro_poderes[p].nombre = "";
        	p++;
        }
    }
	maximo = -1;
}

void estudiantes::registro_datos(datos x){
	if(maximo < 99){
		maximo++;
		registro_estudiantes[maximo] = x;
	}else{
		cout << "Registro lleno" << endl;
	}
}

void estudiantes::lista_egresados(){
	int p = 0;
    cout << "\nLista de estudiantes egresados: " << endl;
    cout << endl;
    for(int i = 0; i <= maximo; i++){
        if(registro_estudiantes[i].egresado == 'S'){
            cout << "Nombre: " << registro_estudiantes[i].nombre << " ";
            cout << "Alias: " << registro_estudiantes[i].alias << " ";
            cout << "Sexo: " << registro_estudiantes[i].sexo << " ";
            cout << "Fecha N: " << registro_estudiantes[i].nacimiento.dia << "/" << registro_estudiantes[i].nacimiento.mes << "/" << registro_estudiantes[i].nacimiento.anio << endl;
            cout << "\nPosee " << registro_estudiantes[i].cantidad_poderes << " poderes." << endl;
            while(p < registro_estudiantes[i].cantidad_poderes){
                cout << "Nombre del poder " << p+1 << ": " << registro_estudiantes[i].registro_poderes[p].nombre << " ";
                cout << "Nivel del poder: " << registro_estudiantes[i].registro_poderes[p].nivel << " ";
                cout << "Tipo de poder: " << registro_estudiantes[i].registro_poderes[p].tipo << " ";
                cout << endl;
                p++;
            }
            cout << endl;
        }
    }
}

void estudiantes::datos_estudiante(string alias){
    bool n = false;
    int p = 0;
    for(int i = 0; i <= maximo; i++){
        if(registro_estudiantes[i].alias == alias){
            cout << "Nombre: " << registro_estudiantes[i].nombre << " ";
            cout << "Alias: " << registro_estudiantes[i].alias << " ";
            cout << "Sexo: " << registro_estudiantes[i].sexo << " ";
            cout << "Fecha N: " << registro_estudiantes[i].nacimiento.dia << "/" << registro_estudiantes[i].nacimiento.mes << "/" << registro_estudiantes[i].nacimiento.anio << endl;
            cout << "\nPosee " << registro_estudiantes[i].cantidad_poderes << " poderes." << endl;
            while(p < registro_estudiantes[i].cantidad_poderes){
                cout << "Nombre del poder " << p+1 << ": " << registro_estudiantes[i].registro_poderes[p].nombre << " ";
                cout << "Nivel del poder: " << registro_estudiantes[i].registro_poderes[p].nivel << " ";
                cout << "Tipo de poder: " << registro_estudiantes[i].registro_poderes[p].tipo << " ";
                cout << endl;
                p++;
            }
            cout << endl;
            cout << endl;
            n = true;
        }

        if(n == false){
            cout << "El estudiante no se encuentra registrado. " << endl;
        }
    }
}

int estudiantes::cantidad_2010(){
    int contador = 0;
    for (int i = 0; i <= maximo; i++){
        if(registro_estudiantes[i].nacimiento.anio < 2010){
            contador++;
        }
    }
    return contador;
}

int estudiantes::cantidad_lvl5(){
    int contador, p;
    contador = 0;
    p = 0;

    for (int i = 0; i <= maximo; i++){
        while(p < 6){
            if(registro_estudiantes[i].registro_poderes[p].nivel == 5){
                contador++;
            }
            p++;
        }
    }

    return contador;
}

void estudiantes::total_mujeres(){
    int contador = 0;
    int porcentaje, total;
    total = maximo+1;
    for (int i = 0; i <= total; i++){
        if(registro_estudiantes[i].sexo == 'F'){
            contador++;
        }
    }
    porcentaje = (contador/total)*100;

    cout << "El porcentaje de mujeres es: " << porcentaje << endl;
}
