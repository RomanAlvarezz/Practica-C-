#include <iostream>
#include <stdlib.h>
using namespace std; 

class Persona {
    private:
        string nombre;
        int edad;
    public: 
        Persona(string, int);
        virtual void mostrar();
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

// ------------ ALUMNO ------------

class Alumno : public Persona{
    private:
        float promedio;
    public:
        Alumno(string, int, float);
        void mostrar();
};

Alumno::Alumno(string _nombre, int _edad, float _promedio) : Persona(_nombre, _edad) {
    promedio = _promedio;
}

void Alumno::mostrar(){
    Persona::mostrar();
    cout << "Promedio: " << promedio << endl;
}

// ------------ PROFESOR ------------

class Profesor : public Persona {
    private: 
        string materia;
    public:
        Profesor(string, int, string);
        void mostrar();
};

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre, _edad){
    materia = _materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout << "Materia: " << materia << endl;
}

void separador(){
    cout << "-------------------" << endl;
}

int main(){

    Persona * vector[3];

    vector[0] = new Persona("Maki Zenin", 20);
    vector[1] = new Profesor("Satoru Gojo", 30, "hechiceria");
    vector[2] = new Alumno("Yuji Itadori", 21, 7.2);

    vector[0]->mostrar();
    separador();
    vector[1]->mostrar();
    separador();
    vector[2]->mostrar();

    return 0;
}