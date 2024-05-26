#include <iostream>
#include <vector>
#include <string>
using namespace std;

void separador(){
    cout << "---------------" << endl;
}

class Persona {
    private:
        string nombre;
    public: 
        Persona();
        Persona(string);
        void setNombre(string);
        string getNombre();
};

Persona::Persona(){}

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
        Oferta();
        Oferta(float, Persona); 
        float getMonto() const;
        Persona getPersona();
};

Oferta::Oferta(){}

Oferta::Oferta(float _monto, const Persona _persona) {
    monto = _monto;
    ofertante = _persona;
}

Persona Oferta::getPersona(){
    return ofertante;
}

float Oferta::getMonto() const {
    return monto;
}

class Lote {
    private:
        int nroLote;
        string nombreLote;
        Oferta ofertaMayor;
    public:
        Lote();
        Lote(int,string);
        void ofertar(Oferta);
        int getNroLote();
        string getNombreLote();
        Oferta getOfertaMayor();
};

Lote::Lote(){
    Persona prandom("Nadie");
    Oferta ofrandom(0.0,prandom);
    ofertaMayor = ofrandom;
};

Lote::Lote(int _nro, string _nombre) {
    nroLote = _nro;
    nombreLote = _nombre;
}

Oferta Lote::getOfertaMayor(){
    return ofertaMayor;
}

void Lote::ofertar(Oferta _oferta) {
    if (_oferta.getMonto() > ofertaMayor.getMonto()){
        ofertaMayor = _oferta;
        cout << "Su oferta ha sido aceptada!" << endl;
    } else {
        cout << "Su oferta es muy baja xD" << endl;
    }
}

int Lote::getNroLote(){
    return nroLote;
}

string Lote::getNombreLote(){
    return nombreLote;
}

class Subasta {
    private:
        vector<Lote> lotes;
    public: 
        Subasta();
        void cargar1Lote(Lote);
        void mostrarLotes();
};

Subasta::Subasta(){};

void Subasta::cargar1Lote(Lote _loteNuevo) {
    lotes.push_back(_loteNuevo);
}

void Subasta::mostrarLotes(){
    cout << "Actualmente hay " << lotes.size() << " lotes disponibles" << endl;
    if (lotes.size() != 0){
        vector<Lote>::iterator I1, I2;
        I1 = lotes.begin();
        I2 = lotes.end();
        for( ; I1 != I2 ;I1++) {
        cout << "Lote Nro : " << (*I1).getNroLote() << endl;
        cout << "Duenio : " << (*I1).getOfertaMayor().getPersona().getNombre() << endl;
        cout << "Oferta Vigente : " << (*I1).getOfertaMayor().getMonto() << endl;
        separador();
    }
    }
    
    //oferta vigente
}

int main (){

    Persona p1("Juan");
    Persona p2("Pedro");
    Persona p3("Gonzalo");

    Oferta of1(5500000.85,p1);
    Oferta of2(3500000.2,p2);
    Oferta of3(10500000.74,p3);

    Lote l1(459,"Uriburu");
    l1.ofertar(of2);
    l1.ofertar(of3);
    l1.ofertar(of2);

    Lote l2(123,"Avellaneda");
    l2.ofertar(of1);

    Lote l3(715,"Julio Roca");
    l3.ofertar(of2);
    
    Subasta subasta;
    subasta.mostrarLotes();
    subasta.cargar1Lote(l1);
    subasta.cargar1Lote(l2);
    subasta.cargar1Lote(l3);
    subasta.mostrarLotes();

    return 0;
}
