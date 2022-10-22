#include "Cartesiano.h"
#include <math.h>
#include <iostream>
using namespace std;

Cartesiano::Cartesiano(){
    numcar ok;
    ok.x=0.0; ok.y=0.0; ok.ch='0';
    for(int q; q<30; q++){
        Cartano[q]=ok;
    }
    maxi=-1;
}
void Cartesiano::registrar(numcar pares){
    if(maxi<29){
        maxi++;
        Cartano[maxi]=pares;
    }else{
        cout << "\nError. Estructura de datos llena.\n";
    }
}
int Cartesiano::cuadrante3(){
    int cant = 0;
    for(int o=-1; o<maxi;){
            o++;
        if((Cartano[o].x<0)&&(Cartano[o].y<0)) cant++;
    }
    if(cant==0){
        cout<<"\n\nNingún punto se encuentra ubicado en el tercer cuadrante.\n";
        return -1;
    }
    return cant;
}
void Cartesiano::situadosY(){
    bool valor=0; int c=-1;
    cout<<"\nLos puntos ubicado en el eje Y son:\n";
    while(c<maxi){
        c++;
        if((Cartano[c].x==0)&&(Cartano[c].y!=0)){
                valor=1;
            cout<<"\nPunto "<<Cartano[c].ch<<"("<<Cartano[c].x<<","<<Cartano[c].y<<")";
        }
    }
    cout << endl;
    if(valor==0) cout << "No se encontró ningún punto ubicados en el eje Y.\n";
}
void Cartesiano::lista(){
    int i=-1;
    float distancia=0.0;
    cout<<"\nEl Listado de puntos registrados es:\n";
    while(i<maxi){
        i++;
        distancia = sqrt(((0-Cartano[i].x)*(0-Cartano[i].x))+((0-Cartano[i].y)*(0-Cartano[i].y)));
        cout<<"\nPunto "<<Cartano[i].ch<<"("<<Cartano[i].x<<","<<Cartano[i].y<<") "<<" Su Distancia con respecto al punto (0,0) es: "<<distancia;
    }
    cout << endl;
}
