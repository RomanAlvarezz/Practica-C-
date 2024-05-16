#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Persona {
    private:
        string nombre;
    public: 
        Persona(string);
        string getNombre();
        void setNombre(string);
};

Persona::Persona(string _nombre){
    nombre = _nombre;
}

void Persona::setNombre(string _nombre){
    nombre =_nombre;
}

string Persona::getNombre(){
    return nombre;
}

class Oferta {
    private:
        float monto;
        Persona ofertante;
    public: 
        Oferta(float, Persona); // Passing Persona by const reference
        float getMonto() const;
};

Oferta::Oferta(float _monto, const Persona _persona) : monto(_monto), ofertante(_persona) {

}


float Oferta::getMonto() const {
    return monto;
}

// class Lote {
    
// }

// class Subasta {
//     private:
//         vector<Lote> lotes;
// }

int main (){

    Persona p1("Roman");
    Persona p2 = p1;
    cout << p1.getNombre()<<endl;

    return 0;
}

/*La idea es que una subasta consiste en un conjunto de items ofertados para la venta.
Estos items son llamados lotes. Las Personas ingresan ofertas para los lotes y la mas
elevada es la que se registra en el Lote. Ni la Persona ni la Oferta inicia la actividad 
en la subasta.La persona solo posee un nombre. Y la oferta guarda el monto y el ofertante.
El lote, tiene un numero y un nombre, ademas se guarda la oferta mas grande.
La subasta guarda la coleccion de lotes y la cantidad de los mismos.
*/