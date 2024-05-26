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

Perro::~Perro(){
    cout << "Se acaba de destruir el objeto: " << nombre << endl;
} //Destructor

void Perro::mostrarDatos(){
    cout << "Raza: " << raza << " Nombre: " << nombre << endl;
}

void Perro::ladrar(){
    cout << "Guau guau" << endl;
}

int main () {
    Perro p1 = Perro("Duque", "Doberman");
    p1.mostrarDatos();
    p1.~Perro();  
    p1.mostrarDatos(); // No lo destruye porque no importa que yo fuerze a usar el destructor en la linea anterior(35), el destructor se va a ejecutar una vez el main retorne el 0


    return 0;
}