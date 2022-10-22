#include "escuela.h"
#include <iostream>
escuela::escuela()
{
    maximo = 0;
}

void escuela::registrar_datos(datos_estudiantes e){
    if(maximo < 50){
		estudiantes[maximo] = e;
		maximo++;
	}else{
		cout << "Registro lleno" << endl;
	}
}

void escuela::listado_general(){
    cout << "\nLista de estudiantes: " << endl;
    cout << endl;
    for(int x = 0; x <= maximo; x++){
        int w = 0;
        if(estudiantes[x].estudiante_egresado == 's'){
            cout << "Nombre: " << estudiantes[x].nombre << " ";
            cout << "Alias: " << estudiantes[x].alias << " ";
            cout << "Sexo: " << estudiantes[x].sexo_estudiante << " ";
            cout << "Fecha N: " << estudiantes[x].fecha_nacimiento.d << "-" << estudiantes[x].fecha_nacimiento.m << "-" << estudiantes[x].fecha_nacimiento.a << endl;
            cout << "\nTiene " << estudiantes[x].cantidad_poderes << " poderes." << endl;
            while(w < estudiantes[x].cantidad_poderes){
                cout << "Nombre del poder: " << estudiantes[x].poderes[w].nombre << " ";
                cout << "Tipo de poder: " << estudiantes[x].poderes[w].tipo_poder << " ";
                cout << "Nivel del poder: " << estudiantes[x].poderes[w].nivel_poder << " " << endl;
                w++;
            }
            cout << endl;
        }
    }
}

void escuela::datos_alias(string alias){
    bool e = false;
    int w = 0;

    for(int x = 0; x <= maximo; x++){
        if(estudiantes[x].alias == alias){
            cout << "Nombre: " << estudiantes[x].nombre << " ";
            cout << "Alias: " << estudiantes[x].alias << " ";
            cout << "Sexo: " << estudiantes[x].sexo_estudiante << " ";
            cout << "Fecha N: " << estudiantes[x].fecha_nacimiento.d << "-" << estudiantes[x].fecha_nacimiento.m << "-" << estudiantes[x].fecha_nacimiento.a << endl;
            cout << "\nTiene " << estudiantes[x].cantidad_poderes << " poderes." << endl;
            while(w < estudiantes[x].cantidad_poderes){
                cout << "Nombre del poder: " << estudiantes[x].poderes[w].nombre << " ";
                cout << "Tipo de poder: " << estudiantes[x].poderes[w].tipo_poder << " ";
                cout << "Nivel del poder: " << estudiantes[x].poderes[w].nivel_poder << " " << endl;
                w++;
            }
            cout << endl;
            e = true;
        }
    }
    if(e == false){
        cout << "El alias no se encuentra. " << endl;
    }
}

int escuela::cantidad_estudiantes_2001_2005(){
    int c = 0;
    for (int x = 0; x <= maximo; x++){
        if(estudiantes[x].fecha_nacimiento.a >= 2001 && estudiantes[x].fecha_nacimiento.a <= 2005){
            c++;
        }
    }
    return c;
}

int escuela::porcentaje_mujeres_mental(){
    int contador = 0;
    float porcentaje, total;
    total = maximo;
    for (int x = 0; x <= total; x++){
        int w = 0;
        if(estudiantes[x].sexo_estudiante == 'f'){
            while(w < estudiantes[x].cantidad_poderes){
                if(estudiantes[x].poderes[w].tipo_poder == 'm'){
                    contador++;
                }
                w++;
            }

        }
    }
    porcentaje = (contador/total)*100;

    return porcentaje;
}
