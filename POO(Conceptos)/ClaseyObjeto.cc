#include <iostream>
#include <stdlib.h>
using namespace std; 

class Persona{
    private: //Atributos
        int edad;
        string nombre;
    public:  //Metodos
        Persona(int, string); //Constructor
        void presentarse();
        void cantar();
};

//Constructor, nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::presentarse(){
    cout << "Hola que tal mi nombre es " << nombre << " y tengo "<<edad<< " anios";
}

void Persona::cantar(){
    cout << "Que alguien saque a bailar a la morocha...";
}

void separar(){
    cout <<"\n";
}

int main() {
    Persona p1 = Persona(18,"Mark");
    Persona p2(1000,"Nolan");
    p1.presentarse();
    separar();
    p1.cantar();
    separar();
    p2.presentarse();
    separar();
    p2.cantar();
    return 0;
}