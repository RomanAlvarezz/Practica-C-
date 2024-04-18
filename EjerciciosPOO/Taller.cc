#include <iostream>
#include <stdlib.h>
using namespace std;


class Taller {
    private:
        int cant_max_vehiculos,num_tot_vehiculos;
    public: 
        Taller(){
            cant_max_vehiculos = 5;
            num_tot_vehiculos = 0;
        };
        void meterVehiculo();
        void arreglarMotos();
        void arreglarAutos();
};