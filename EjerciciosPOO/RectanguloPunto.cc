#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto {
    private:
        int coord_x, coord_y;
    public: 
        Punto(){
            coord_x = 0;
            coord_y = 0;
        }
        // Punto(int,int);
        void setPunto(int, int);
        void print();
        bool valida(int);
};

// Punto::Punto(int x, int y){
//     coord_x = x;
//     coord_y = y;
// }

void Punto::setPunto(int x, int y){
    coord_x = x;
    coord_y = y;
}

void Punto::print(){
    cout << "Coordenada X: " << coord_x << endl;
    cout << "Coordenada Y: " << coord_y << endl;
}

bool Punto::valida(int n){
    return n > 0;
}

void separador(){
    cout << endl;
}

// ---------- RECTANGULO ----------

class Rectangulo {
    private:
        Punto tope_izq, inf_der;
    public:
        Rectangulo(int, int, int, int);
        void print();
};

Rectangulo::Rectangulo(int x1, int y1, int x2, int y2){
    tope_izq.setPunto(x1,x2);
    inf_der.setPunto(x2,y2);
}

void Rectangulo::print(){
    tope_izq.print();
    inf_der.print();
}

int main () {
    Rectangulo r1 = Rectangulo(5,4,9,2);
    Rectangulo r2(0,0,6,2);

    r1.print();
    separador();
    r2.print();

    return 0;
}