#include <iostream>
#include <string.h>
using namespace std; 

//void muestroNum (int &);

struct persona {
    char nombre[30];
    int edad;
};

void pedirDatos(struct persona *);
void mostrarDatos(struct persona *);

int main () {
    struct persona p1;
    struct persona * dirPer1 = &p1;

    pedirDatos(dirPer1);
    mostrarDatos(dirPer1);

    return 0;
}

void pedirDatos(struct persona * p){
    cout << "Ingrese nombre: "; 
    cin.getline(p->nombre,30,'\n');

    cout << "Ingrese edad: ";
    cin >> p->edad;
}

void mostrarDatos(struct persona *p){
    cout << "Nombre: " << p->nombre << "\n";
    cout << "Edad: " << p->edad; 
}

/*
    int x = 5;
    cout << x << "-" << &x << "\n";
    muestroNum(x);
*/
/*
    int num = 5;
    int * dir_num = &num;

    cout << num << "-" << dir_num;
    cout << "\n" << *dir_num;
*/

// void muestroNum (int &n){
//     cout << n << "-" << &n;
// }