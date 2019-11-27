//
// Created by jatzu on 7/11/2019.
//

#ifndef SESSION_12B_MASCOTA_H
#define SESSION_12B_MASCOTA_H
#include <iostream>
using namespace std;

class Mascota {
public:
    string nombre;
    string raza;
    int peso;
    Mascota(string nombre,string raza, int peso);
    virtual void mostrar();

    virtual void dormir()=0;
    virtual void comer()=0;
    virtual void sonido()=0;

};


#endif //SESSION_12B_MASCOTA_H
