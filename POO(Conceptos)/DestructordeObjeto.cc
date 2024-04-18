#include <iostream>
#include <stdlib.h>
using namespace std; 

class Perro {
    private:
        string nombre,raza;
    public:
        Perro(string, string);  //Constructor
        ~Perro();  //Destructor
        void mostrarDatos();
        void ladrar();
};

Perro::Perro(string _nombre, string _raza){
    nombre = _nombre;
    raza = _raza;
}

Perro::~Perro(){} //Destructor

void Perro::mostrarDatos(){
    cout << "Raza: " << raza << " Nombre: " << nombre << endl;
}

void Perro::ladrar(){
    cout << "Guau guau" << endl;
}

int main () {
    Perro p1 = Perro("Duque", "Doberman");
    p1.mostrarDatos();
    p1.~Perro();  //Destruimos el objeto
    p1.mostrarDatos(); // No lo destruye??


    return 0;
}