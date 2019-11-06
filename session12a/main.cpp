#include <iostream>
#include "Vehiculo.h"
#include "Bote.h"
#include "Bicicleta.h"
#include <vector>
using namespace std;

int main() {
    auto *b1 = new Bicicleta();
    auto *b2 = new Bote();
    vector<Vehiculo> vehiculos;
    vehiculos.push_back(*b1);
    vehiculos.push_back(*b2);
    for (int i=0;i<vehiculos.size();i++){
        vehiculos[i].avanzar();
    }

    return 0;
}