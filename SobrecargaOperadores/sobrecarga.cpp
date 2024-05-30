#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Coordenada {
    public:
        int x,y;
        Coordenada(int _x, int _y){
            x = _x;
            y = _y;
        }
        Coordenada operator+(Coordenada c2) ;
        Coordenada operator++();
        bool operator==(Coordenada c2);
        friend Coordenada operator-(Coordenada c1, Coordenada c2);
};

Coordenada Coordenada::operator+(Coordenada c2) {
    Coordenada r((x + c2.x),(y + c2.y));
    return r;
}

Coordenada Coordenada::operator++(){
    x++;
    y++;
    return *this;
}

bool Coordenada::operator==(Coordenada c2){
    return (x == c2.x && y == c2.y);
}

Coordenada operator-(Coordenada c1, Coordenada c2){
    int x1 = c1.x - c2.x;
    int y2 = c1.y - c2.y;
    return Coordenada(x1,y2);
}
int main () {
    Coordenada c1(1, 2);
    Coordenada c2(3, 4);
    Coordenada c3 = c1 + c2 + c1;

    // Imprimir los valores para verificar
    std::cout << "c3: (" << c3.x << ", " << c3.y << ")" << std::endl;
    Coordenada c4 = ++c1;
    cout << "c4: " << c4.x << "," << c4.y << endl;
    if (c1 == c2) {
        cout << "c1 y c2 son iguales" << endl;
    } else {
        cout << "c1 y c2 son distintos" << endl;
    }

    Coordenada c5 = c1 - c2;
    cout << "c1 - c2 = " << c5.x << "," << c5.y << endl;

    return 0;
}

// class Punto{
//  int x, y;
//  public:
//  Punto(int xx, int yy): x(xx), y(yy){}
//  Punto operator+(const Punto& b) const;
//  int get_x() {return x;}
//  int get_y() {return y;}
// };
// Punto Punto::operator+(const Punto& b) const{
//  return Punto(x + b.x, y + b.y);
// }