//
// Created by jatzu on 7/11/2019.
//

#ifndef SESSION12B_PERRO_H
#define SESSION12B_PERRO_H
#include "Mascota.h"
#include <iostream>
using namespace std;

class Perro : public Mascota {
public:
    void dormir();
    void comer();
    void sonido();
    Perro(string nombre, string raza, int peso);
    void mostrar();
};


#endif //SESSION12B_PERRO_H
