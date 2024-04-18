#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vInt_2(10,1);
    //push_back() es el que permite ingresar un nuevo elemento
    //al vector
    //

        for(int i=0; i < vInt_2.size() ;i++)
    {
        cout << "vInt_2 = " << vInt_2[i] << endl;
    }

    cout << "ñTamao de vInt_2 = " << vInt_2.size() << endl;

    vInt_2.push_back(5);

    cout << "Nuevo ñtamao de vInt_2 = " << vInt_2.size() << endl;

    for(int i=0; i < vInt_2.size() ;i++)
    {
        cout << "vInt_2 = " << vInt_2[i] << endl;
    }

    //pop_back() eliminamos el último elemento
    //Esta ófuncin no lo retorna
    //
    vInt_2.pop_back();

    for(int i=0; i < vInt_2.size() ;i++)
    {
        cout << "vInt_2 = " << vInt_2[i] << endl;
    }

    cout << "ñTamao de vInt_2 = " << vInt_2.size() << endl;
    vInt_2.resize(5);
    //ahora su tamano es
    cout<<"El nuevo tamano es: " << vInt_2.size()<<endl;

    //Esto ha provocado una perdida de óinformacin
    //
    for(int i=0; i < vInt_2.size() ;i++)
    {
        cout << "vInt_2 = " << vInt_2[i] << endl;
    }

    // Borrado de elementos
    //
    vector<int> vInt_3(10);

    for (int i = 0; i < 10; i++)
        vInt_3[i] = i+1;

    cout << "El ñtamao de vInt_3 es " << vInt_3.size() << endl;
    cout << "--------------" << endl;
    for(int i=0; i < vInt_3.size() ;i++)
    {
        cout << "vInt_3 = " << vInt_3[i] << endl;
    }

    vInt_3.erase(vInt_3.begin()+3, vInt_3.begin()+6);
    cout << "--------------" << endl;
    for(int i=0; i < vInt_3.size() ;i++)
    {
        cout << "vInt_3 = " << vInt_3[i] << endl;
    }
    cout << "El ñtamao despues del borrado de vInt_3 es " << vInt_3.size() << endl;

    for(int i=0; i < vInt_3.size() ;i++)
    {
        cout << "vInt_3 = " << vInt_3[i] << endl;
    }

    // IMPORTANTE erase() no recibe elementos sino posiciones!!!!
    //
    // insert permite agregar elementos en cualquier parte del vector
    //
    vInt_3.insert(vInt_3.begin()+3, 53456);
    cout << endl;
    for(int i=0; i < vInt_3.size() ;i++)
    {
        cout << "vInt_3 = " << vInt_3[i] << endl;
    }

    // otra forma (de varias)
    //
    vInt_3.insert(vInt_3.begin()+4,3,-1);
    cout << endl;
    for(int i=0; i < vInt_3.size() ;i++)
    {
        cout << "vInt_3 = " << vInt_3[i] << endl;
    }
}
