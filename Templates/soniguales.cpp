#include<iostream>
#include<string>
using namespace std;

template<typename C>
void sonIguales(const C& a, const C& b){
    (a == b) ? cout << "Son iguales\n" : cout << "Son distintos\n";
}

class Persona{
    private:
        string nombre;
        int edad;
    public:

        Persona(string n, int e) : nombre{n}, edad{e} {}

        bool operator==(const Persona& P) const {
            return (edad == P.edad && nombre == P.nombre);
        }

        friend ostream& operator<<(ostream& os, const Persona& P);
};

ostream& operator<<(ostream& os, const Persona& P){
    os << "Nombre: " << P.nombre << endl;
    os << "Edad: " << P.edad << endl;
    return os;
}

int main(){
    Persona a("Pablo", 44), b("Martin", 35), c("Pablo", 44);
    sonIguales(a, b);
    sonIguales(a, c);
    cout << a;
    return 0;
}
