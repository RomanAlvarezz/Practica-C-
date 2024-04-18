#include <iostream>
//#include <conio.h>
#include <string.h>
using namespace std; 

//Estructura
/*
struct info_direcc {
    char calle[30];
    int numero;
} Info_Direc;



struct empleado {
    char nombre[10];
    double salario;
    struct info_direcc direcc;
} Empleado;
*/

//void saveNum (int * n);
//void saveNum (int &);

void changeNum (int &, int &);

int main () {

 int x = 1, y = 2;
 cout << x << y;
 changeNum(x,y);
 cout << x << y;


    return 0;
}


void changeNum (int &n1, int &n2){
    int aux = n1;
    n1 = n2;
    n2 = aux;
}

//void saveNum (int  * n) {
// void saveNum (int &n) {
//     n = 98;
// }











//Estructura
// struct empleado e1 = {"Pedro", 500.25, {"Artigas", 459}};
// cout << e1.direcc.calle << e1.direcc.numero;

//cadenas
/*
    char palabra[] = "Roman";
    char palabra2[] = {'R','o','m','a','n'};
    char nombre [20];

    cout << "Ingrese su nombre ";
    cin.getline(nombre,20,'\n');

    cout << nombre;
*/
//ingreso y muestreo
/*
    int edad;

    cout << "Edad : ";

    cin >> edad;

    cout << "La edad es "<<edad;
*/