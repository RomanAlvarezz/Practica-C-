//PUBLIC-PRIVATE-PROTECTED
#include <iostream>
//#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

class BaseClass {
    private:
        int _private_member;
    public:
        int _public_member;
    protected: 
        int _protected_member;  // Cuando una clase herede de Baseclass, este atributo protected va a funcionar como un tributo privado (solo dentro de la clase heredera)
};

class DerivedClass : public BaseClass {
    public:
        void member_function() {
            _public_member = 10;
            //_private_member = 20; //esto no se puede pq es privado
            _protected_member = 30;

            cout << "public_member: " << _public_member << endl;
            //cout << "public_member" << _private_member << endl;
            cout << "public_member: " << _protected_member << endl;
        }
};

class AnotherClass : public DerivedClass {
    public:
        void new_function(){
            _protected_member = 90;
        }
};

int main () {

    BaseClass base;
    //base._protected_member = 15; //esto me tira error pq labura igual que un atributo privado

    DerivedClass derived;
    derived.member_function();

    return 0;
}