
#include "Vehiculo.h"
#ifndef SESSION12A_BOTE_H
#define SESSION12A_BOTE_H


class Bote: public Vehiculo {
public:
    int velocidad;
    void avanzar() override ;
    void retroceder() override ;
    Bote();
};


#endif //SESSION12A_BOTE_H
