#include <iostream>
#include <stdlib.h>
#include <stdlib.h>
using namespace std;

class Cuenta {
    private:
        long int nroCuenta,dniCuenta;
        double saldoActual;
        float interesAnual;
    public:
        Cuenta(){
            nroCuenta = rand() % 10000000; 
            dniCuenta = 0;
            saldoActual = 0;
            interesAnual = 0;
        };
        Cuenta(long int, double, float);
        void actualizarSaldo();
        void ingresr(double);
        void retirar(double);
        void infoCuenta();
};

Cuenta::Cuenta(long int dni, double saldo, float _interesAnual){
    dniCuenta = dni;
    saldoActual = saldo;
    interesAnual = _interesAnual;
}

void Cuenta::actualizarSaldo(){
    saldoActual = saldoActual + (saldoActual + (interesAnual/100));
}

void Cuenta::ingresr(double monto){
    if (monto > 100000){
        cout << "No se acredito la suma, era mucho dinero, reclame en las oficinas";
    }

    saldoActual += monto;
}

int main () {
    srand(getpid());

    Cuenta c1;


    return 0;
}