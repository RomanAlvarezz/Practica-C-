#include <iostream>
#include <stdlib.h>
using namespace std; 

class Persona {
    private:
        string nombre;
        int edad;
    public:
        Persona(string, int);
        void mostrarDatos();
};

class Alumno : public Persona{
    private:
        int legajo;
        char comision;
    public:
        Alumno(string, int, int, char); //Constructor de Alumno
        void mostrarAlumno();
};

//Constructor de la clase Persona (Clase Padre)
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

//Constructor de la clase Alumno (Clase Hije)
Alumno::Alumno(string _nombre, int _edad, int _legajo, char _comision) : Persona(_nombre, _edad){
    legajo = _legajo;
    comision = _comision;
}

void Persona::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
    mostrarDatos();
    //cout<<"Nombre: "<<nombre<<endl; // Aca no puedo acceder a el atributo nombre porque es un atributo privado de la clase Persona
    cout<<"Legajo: "<<legajo<<endl;
    cout<<"Comision: "<<comision<<endl;
}

int main(){
    Alumno a1("Pedri", 20, 2905, 'A');
    a1.mostrarAlumno();
    cout << "---------" <<endl;
    //a1.mostrarDatos();
    //cout << a1.nombre<<endl; // no puedo hacer esto porque el atributo nombre es privado

    return 0;
}