//Varios Constructores
#include <iostream>
#include <stdlib.h>
using namespace std; 

class Fecha {
    private:
        int dia,mes,anio;
        string evento;
    public: 
        Fecha(int,int,int);
        Fecha(long);
        void mostrarFecha();
        void anadirEvento(string);
        void mostrarEvento();
};

Fecha::Fecha(int _dia, int _mes, int _anio){
    dia = _dia;
    mes = _mes;
    anio = _anio;
}
//    27/12/2001 -- 20011227
Fecha::Fecha(long fecha){
    anio = int(fecha/10000);
    mes = int((fecha-anio*10000)/100);
    dia = int(fecha-anio*10000-mes*100);
}

void Fecha::mostrarFecha(){
    cout <<"Fecha: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

void Fecha::anadirEvento(string nombreEvento){
    evento = nombreEvento;
    //cout << evento;
}

void Fecha::mostrarEvento(){
    cout << evento << endl;
}

int main(){
    Fecha cumpleJuan(27,12,2001);
    Fecha cumplePedro = Fecha (6,8,2007);
    Fecha casamientoJuan(20240601);
    casamientoJuan.anadirEvento("casamiento");
    casamientoJuan.mostrarEvento();
    casamientoJuan.anadirEvento("cumpleanios"); // pisa casamiento sin problemas
    casamientoJuan.mostrarEvento();

    casamientoJuan.mostrarFecha();
    cumplePedro.mostrarFecha();
    cumpleJuan.mostrarFecha();

    

    return 0;
}