//Ejercicio
#include <iostream>
#include <stdlib.h>
using namespace std; 

class Tiempo {
    private:
        int horas,minutos,segundos;
    public:
        Tiempo(int,int,int);
        Tiempo(long);
        void mostrarTiempo();
};

Tiempo::Tiempo(int h, int m, int s){
    horas = h;
    minutos = m;
    segundos = s;
}

Tiempo::Tiempo(long tiempo){
    // Convertir el número a string.
    std::string numeroStr = std::to_string(tiempo);

    // Asegurarse de que el número tiene la longitud esperada.
    if (numeroStr.length() != 6) {
        cout << "El número no tiene la longitud esperada." << endl;
        return;
    }

    // Extraer las partes usando substr. Los argumentos son la posición inicial y la longitud.
    std::string parte1Str = numeroStr.substr(0, 2);
    std::string parte2Str = numeroStr.substr(2, 2);
    std::string parte3Str = numeroStr.substr(4, 2);

    // Convertir las partes a enteros.
    horas = std::stoi(parte1Str);
    minutos = std::stoi(parte2Str);
    segundos = std::stoi(parte3Str);
}

void Tiempo::mostrarTiempo(){
    cout <<"Tiempo: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main () {
    Tiempo t1 = Tiempo(23,55,22);
    t1.mostrarTiempo();

    Tiempo t2(185814);
    t2.mostrarTiempo();
    
    return 0;
}