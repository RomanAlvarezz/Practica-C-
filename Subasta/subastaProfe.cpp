#include "subastaProfe.h"

Persona::Persona(string n){
    nombre = n;
}

Persona::~Persona(){};

string Persona::getNombre(){
    return nombre;
}

ostream& operator << (ostream& o, const Persona& p){
    o << "Nombre de la Persona: " << p.nombre;
    return o;
}

Oferta::Oferta(Persona* p, long v){
    ofertante = p;
    valor = v;
}

Oferta::~Oferta(){
    delete(ofertante);
}

long Oferta::getValor(){
    
    return valor;
}

Persona* Oferta::getOfertante(){
    
    return ofertante;
}


ostream& operator << (ostream &o, const Oferta& of){

    o << "Oferta: " << *(of.ofertante) << " - Valor de oferta: " << of.valor
        << endl;
    return o;
}


Lote::Lote(int n, string d){

    mayorOferta = NULL;
    numero = n;
    descripcion = d;
    
}

Lote::~Lote(){
    delete(mayorOferta);
}

bool Lote::ofertaPara (Oferta* oferta){
    if((mayorOferta == NULL) || (oferta->getValor() > mayorOferta->getValor())) {
        mayorOferta = oferta;
        return true;
    }
    else {
        return false;
    }
}

string Lote::getDescripcion(){

    return descripcion;
}

int Lote::getNumero(){

    return numero;
}

Oferta* Lote::getMayorOferta(){

    return mayorOferta;
}

ostream& operator << (ostream& o, const Lote& l ){
    
    o << "Lote " << l.descripcion << ": " << "\n \t Numero: " << l.numero
        << "\n \t Oferta: " << l.mayorOferta << endl;
    return o; 
}

Subasta::Subasta(){
    loteSiguiente = 1;
}

Subasta::~Subasta(){
    vector<Lote*>::const_iterator it;
        for(it = lotes.begin(); it != lotes.end(); ++it) {
            delete(*it);            
        }
}

void Subasta::ingresarLote(string descripcion){
		
        lotes.push_back(new Lote(loteSiguiente, descripcion));
        loteSiguiente++;
}

void Subasta::mostrarLotes(){

       vector<Lote*>::const_iterator it;
        for(it = lotes.begin(); it != lotes.end(); ++it) {
            cout << **it << endl;            
        }

}

Lote* Subasta::getLote(int loteNumero){
      if((loteNumero >= 1) && (loteNumero < loteSiguiente)) {
            // The number seems to be reasonable.
            Lote* loteSeleccionado = lotes[loteNumero-1];
            // Include a confidence check to be sure we have the
            // right lot.
            if(loteSeleccionado->getNumero() != loteNumero) {
                cout<< "Error interno: el lote retornado no corresponde al"
                    << " numero " << loteNumero << endl;
            
            }
            return loteSeleccionado;
        }
        else {
            cout << "El lote numero: " << loteNumero << " no existe.\n";
            return NULL;
        }
}

void Subasta::ofertaPara(int n, Persona *p, long v){

    Lote* loteSeleccionado = getLote(n);
    if(loteSeleccionado != NULL){
        if(loteSeleccionado->ofertaPara(new Oferta(p, v))) {
            cout << "La oferta al lote numero " << n << " fue exitosa.\n";
            cout << *(loteSeleccionado->getMayorOferta());
        }
        else {
            cout << "El lote numero: " << n << " ya tiene una oferta mayor: "
                << loteSeleccionado->getMayorOferta()->getValor() << endl;
        }
    }
}


int main (){

    Persona* pablo = new Persona ("Pablo");
    Persona* jorge = new Persona ("Jorge");
    Persona* maria = new Persona ("Maria");

    Subasta* subasta = new Subasta();
    subasta->ingresarLote("computadora");
    subasta->ingresarLote("impresora");
    subasta->mostrarLotes();

    subasta->ofertaPara(1, pablo, 8000);
    subasta->ofertaPara(3, maria, 3000);
    subasta->ofertaPara(1, jorge, 5000);

    subasta->mostrarLotes();

    subasta->ofertaPara(2, maria, 3000);

    subasta->mostrarLotes();

    delete(subasta);

    return 0;
}
