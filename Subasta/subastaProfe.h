
/// Ejemplo de una subasta simple.
/** La Subasta puede poseer Lotes de articulos a subastar, cada uno de ellos 
 *  recibe ofertas hechas por personas de las cuales solo se registra la mayor.
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Persona{
    private:
        string nombre;
    public:
        Persona(string);
        ~Persona();
        string getNombre();
        friend ostream& operator << (ostream&, const Persona&);
};

class Oferta{
    private:
        long valor;
        Persona* ofertante;
    public:
        Oferta(Persona*, long);
        ~Oferta();
        long getValor();
        Persona* getOfertante();
        friend ostream& operator << (ostream&, const Oferta&);    
};

class Lote{
    private:
        string descripcion;
        int numero;
        Oferta* mayorOferta;
    public:
        Lote (int , string);
        ~Lote();
        bool ofertaPara (Oferta*);
        string getDescripcion();
        int getNumero();
        Oferta* getMayorOferta();
        friend ostream& operator << (ostream&, const Lote&);
};

class Subasta{
    private:
        vector <Lote*> lotes;
        int loteSiguiente;
    public:
        /**
        * Constructor de la clase
        * Se inicializa el vector y el loteSiguiente se setea en 1
        */
        Subasta();
        /**
        * Destructor de la clase
        */
        ~Subasta();
        void ingresarLote(string);
        void mostrarLotes();
        void ofertaPara(int, Persona*, long);
        Lote* getLote (int);   
};
