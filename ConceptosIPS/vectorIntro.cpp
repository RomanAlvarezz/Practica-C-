//initVector.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    //vector sin inicializar ni indicar ñtamao
    vector<double> Vector_1;
    // Vector_1 = 10; // Error!!!
    // Vector[0]= 1; // Error!!!
    vector<int> Vector_3(10);

    //vector con ñtamao 5 y componentes iniclizadas
    vector<double> Vector_2(6,3.1416);

    // Vemos el ñtamao del vector con .size()
    cout << Vector_3.size() << endl;

    //mostrar las componentes con un ciclo

    for(int i=0; i<Vector_2.size() ;i++)
    { //con el metodo .size() se obtiene el ñtamao del vector
    cout << Vector_2[i] << endl;
    }

  cout<<endl;
}