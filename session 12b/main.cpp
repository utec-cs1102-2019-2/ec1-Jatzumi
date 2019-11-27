#include <iostream>
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include <vector>
using namespace std;

int main() {
    auto *Forest = new Perro("Forest","Pastor aleman",25);
    auto *Felix = new Gato("Felix","desconocido",5);
    vector<Mascota*> mascotas;
    mascotas.push_back(Forest);
    mascotas.push_back(Felix);
    for (int i=0; i < mascotas.size(); i++){
        mascotas[i]->mostrar();
        mascotas[i]->comer();
        mascotas[i]->sonido();
        mascotas[i]->dormir();
    }

    return 0;
}