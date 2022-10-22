#include "Loteria.h"
#include <iostream>
using namespace std;

Loteria::Loteria(){
    fecha x; x.A=0; x.D=0; x.M=0;
    horas y; y.h=0; y.minutes=0;
    for(int i=0; i<100; i++){
            DATOS_GAN[i].num_obt=0;
            DATOS_GAN[i].monto=0.0;
            DATOS_GAN[i].SignoZ='\0';
            DATOS_GAN[i].sorteo_fecha=x;
            DATOS_GAN[i].sorteo_hora=y;
    }
    maxi=-1;
}
d_sorteo Loteria::validar_datos(){
    fecha xy;
    d_sorteo Datos_Finales;
    xy.D=0; xy.M=0; xy.A=0;
    horas ok; ok.h=0; ok.minutes=0;
    int nums=0;
    float Mons;
    char S;
    bool V;
    do{
        V=0;
        cout << "\nIntroduzca la fecha del sorteo con el formato. (DD/MM/AAAA) \n\n";
        cout << "Dia: "; cin >> xy.D;
        cout << "Mes: "; cin >> xy.M;
        cout << "Año: "; cin >> xy.A;
        if((xy.M==4||xy.M==6||xy.M==9||xy.M==11)&&(xy.D>=1&&xy.D<=30)&&(xy.A>=2000)){
                V=1;
        }else{
            if(((xy.M==2)&&(xy.D>=1&&xy.D<=29)&&(xy.A>=2000)&&(xy.A%4==0&&xy.A%100!=0||xy.A%400==0))||((xy.M==2)&&(xy.D>=1&&xy.D<=28))){
                V=1;
            }else{
                if((xy.M==1||xy.M==3||xy.M==5||xy.M==7||xy.M==8||xy.M==10||xy.M==12)&&(xy.D>=1&&xy.D<=31)&&(xy.A>=2000)){
                    V=1;
                }
            }
        }
        if(V==0){cout << "\n¡Fecha inválida!\n";}
    }while(V==0);
    Datos_Finales.sorteo_fecha=xy;

    do{
     cout << "\nIntroduzca la hora del sorteo en formato de 24 horas. (Hora/Minutos)\n\n";
     cout << "Hora: "; cin >> ok.h;
     cout << "Minutos: "; cin >> ok.minutes;
     if((ok.h < 0 || ok.h > 23)||(ok.minutes < 0 || ok.minutes > 59)){cout << "\n¡Hora inválida!\n";}
    }while((ok.h < 0 || ok.h > 23)||(ok.minutes < 0 || ok.minutes > 59));
    Datos_Finales.sorteo_hora=ok;

    do{
        cout << "\nIngrese el número obtenido (de 3 cifras)\n\n";
        cout << "Número: "; cin >> nums;
        if(nums<100||nums>999){cout<<"\n¡Error! No es un número de 3 cifras.\n";}
    }while(nums<100||nums>999);
    Datos_Finales.num_obt=nums;

    do{
        cout << "\nSeleccione el caracter correspondiente al signo zodiacal.\n\n";
        cout << "Aries(A)\nTauro(B)\nGéminis(C)\nCáncer(D)\nLeo(E)\nVirgo(F)\nLibra(G)\nEscorpio(H)\nSagitario(I)\nCapricornio(J)\nAcuario(K)\nPiscis(L)\n";
        cout << endl << "Opción: "; cin >> S; S=toupper(S);
        if(S!='A'&&S!='B'&&S!='C'&&S!='D'&&S!='E'&&S!='F'&&S!='G'&&S!='H'&&S!='I'&&S!='J'&&S!='K'&&S!='L'){cout<<"\n¡Error! Opción Inválida.\n";}
    }while(S!='A'&&S!='B'&&S!='C'&&S!='D'&&S!='E'&&S!='F'&&S!='G'&&S!='H'&&S!='I'&&S!='J'&&S!='K'&&S!='L');
    Datos_Finales.SignoZ=S;

    do{
       cout<< "\nIngrese el monto del ganador (entre 1500 y 50000)\n\n";
       cout << "Monto: "; cin>>Mons;
       if(Mons<1500||Mons>50000){cout<<"\n¡Error! Monto inválido.\n";}
    }while(Mons<1500||Mons>50000);
    Datos_Finales.monto=Mons;
    return Datos_Finales;
}

void Loteria::Registro(d_sorteo Killme){
    if(maxi<99){
        maxi++;
        DATOS_GAN[maxi]=Killme;
    }else{
        cout<<"¡Error! Estructura de datos llena.";
    }

}

void Loteria::Mostrar_datos(fecha J){
    bool siono=0;
    int sun = -1;
    cout<<"\nLos sorteos efectuados el ";
    cout.fill('0');
    cout.width(2);
    cout << J.D<<"/";
    cout.fill('0');
    cout.width(2);
    cout << J.M<<"/"<<J.A<<" fueron:"<<endl;
    while(sun<maxi){
        sun++;
        if((DATOS_GAN[sun].sorteo_fecha.A==J.A)&&(DATOS_GAN[sun].sorteo_fecha.D==J.D)&&(DATOS_GAN[sun].sorteo_fecha.M==J.M)){
            cout << endl << "Hora del sorteo: ";
            cout.fill('0');
            cout.width(2);
            cout<<DATOS_GAN[sun].sorteo_hora.h<<":";
            cout.fill('0');
            cout.width(2);
            cout << DATOS_GAN[sun].sorteo_hora.minutes;
            cout << endl << "Número ganador: "<<DATOS_GAN[sun].num_obt<<endl<<"Signo Zodiacal: ";
            switch(DATOS_GAN[sun].SignoZ){
                case 'A': cout<<"Aries"; break;
                case 'B': cout<<"Tauro"; break;
                case 'C': cout<<"Géminis"; break;
                case 'D': cout<<"Cáncer"; break;
                case 'E': cout<<"Leo"; break;
                case 'F': cout<<"Virgo"; break;
                case 'G': cout<<"Libra"; break;
                case 'H': cout<<"Escorpio"; break;
                case 'I': cout<<"Sagitario"; break;
                case 'J': cout<<"Capricornio"; break;
                case 'K': cout<<"Acuario"; break;
                case 'L': cout<<"Piscis"; break;
            }
            cout<<endl<<"Monto del ganador: "<<DATOS_GAN[sun].monto<<endl;
            siono=1;
        }
        }
        if(siono==0){cout<<"\nNingún Sorteo fue registrado para esta fecha.\n";}
}

int Loteria::cant_esc_tau(){
    int cant=0; int o=-1;
    while(o<maxi){
        o++;
        if((DATOS_GAN[o].SignoZ=='B')||(DATOS_GAN[o].SignoZ=='H')){cant++;}
    }
    return cant;
}

float Loteria::Monto300_699(){
    float cant=0.0; int q=-1;
    while(q<maxi){
        q++;
        if(DATOS_GAN[q].num_obt>=300&&DATOS_GAN[q].num_obt<=699){
            cant = cant + DATOS_GAN[q].monto;
        }
    }
    return cant;
}
