//Esta vez con Setters y Getters
#include <iostream>
#include <stdlib.h>
using namespace std; 

//CLASE PERSONA
class Persona {
    private:
        string nombre;
        int edad;
    public: 
        Persona(string, int);
        void setNombre(string);
        void setEdad(int);
        string getNombre();
        int getEdad();
        void mostrarPersona();
        
};

Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

//CLASE ESTUDIANTE
class Estudiante : public Persona{
    private: 
        int legajo;
        char comision;
    public:
        Estudiante(string, int, int, char);
        void setLegajo(int);
        void setComision(char);
        int getLegajo();
        char getComision();
        void mostrarEstudiante();
};

Estudiante::Estudiante(string _nombre, int _edad, int _legajo, char _comision) : Persona(_nombre, _edad){
    legajo = _legajo;
    comision = _comision;
}

//CLASE EMPLEADO
class Empleado : public Persona {
    private: 
        float sueldo;
        int antiguedad; 
    public: 
        Empleado(string, int, float, int);
        void mostrarEmpleado();
};

Empleado::Empleado(string _nombre, int _edad, float _sueldo, int _antiguedad) : Persona(_nombre, _edad){
    sueldo = _sueldo;
    antiguedad = _antiguedad;
}

//CLASE UNIVERSITARIO
class Universitario : public Estudiante{
    private: 
        float promedio;
        string carrera;
    public: 
        Universitario(string, int, int, char, float, string);
        void mostrarUniversitario();
};

Universitario::Universitario(string _nombre, int _edad, int _legajo, char _comision, float _promedio, string _carrera) : Estudiante(_nombre, _edad, _legajo, _comision){
    promedio = _promedio;
    carrera = _carrera;
}


//--------------- MÉTODOS PERSONA---------------

void Persona::mostrarPersona(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

//--------------- MÉTODOS ESTUDIANTE---------------

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout << "Legajo: " << legajo << endl;
    cout << "Comision: " << comision << endl;
}

void Estudiante::setLegajo(int _legajo){
    legajo = _legajo;
}

void Estudiante::setComision(char _comision){
    comision = _comision;
}

int Estudiante::getLegajo(){
    return legajo;
}

char Estudiante::getComision(){
    return comision;
}

//--------------- MÉTODOS EMPLEADO---------------

void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout << "Sueldo: " << sueldo << endl;
    cout << "Antiguedad: " << antiguedad << endl;
}

//--------------- MÉTODOS UNIVERSIARIO ---------------
void Universitario::mostrarUniversitario() {
    mostrarEstudiante();
    cout << "Promedio: " << promedio << endl;
    cout << "Carrera: " << carrera << endl;
}

void separador(){
    cout << "-------------------" << endl;
}

int main () {
    Estudiante e1("Nikola Tesla", 20, 2905, 'A');
    e1.mostrarPersona();
    separador();
    e1.mostrarEstudiante();
    separador();
    e1.setNombre("Alberto Einstein");
    //e1.mostrarEstudiante();
    cout << e1.getNombre() << endl;

    separador();

    Empleado em1 = Empleado("Juan Omh", 53, 100.54, 15);
    em1.mostrarEmpleado();

    separador();

    Universitario u1("Openhaimer", 45, 4508, 'B', 8.9, "Astronomia");
    u1.mostrarUniversitario();


    return 0;
}