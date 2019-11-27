//
// Created by jatzu on 7/11/2019.
//

#ifndef SESSION12B_GATO_H
#define SESSION12B_GATO_H
#include <iostream>
#include "Mascota.h"
using namespace std;

class Gato: public Mascota {
public:
    void dormir();
    void comer();
    void sonido();
    Gato(string nombre, string raza, int peso);
    void mostrar();
};


#endif //SESSION12B_GATO_H
