//Métodos Constructores y Modificadores (Getters y Setters)
#include <iostream>
#include <stdlib.h>
using namespace std; 

class Punto {
    private: 
        int x,y;
    public: 
        Punto(); //Aunque lo deje vacia SIEMPRE hay que CREARLO
        void setX(int);
        void setY(int);
        int getX();
        int getY();
};

Punto::Punto(){}

void Punto::setX(int _x){
    x = _x;
}

void Punto::setY(int _y){
    y = _y;
}

int Punto::getX(){
    return x;
}

int Punto::getY(){
    return y;
}

int main () {
    Punto p1;
    p1.setX(24);
    p1.setY(56);
    //cout << p1.x; eto no se puede
    cout <<"P1 tiene coordenadas X="<<p1.getX()<<" Y="<<p1.getY()<<endl;


    return 0;
}



