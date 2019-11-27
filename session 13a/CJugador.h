#ifndef SESSION13A_CJUGADOR_H
#define SESSION13A_CJUGADOR_H
#include <iostream>
#include <vector>
using namespace std;

#include "CMaquina.h"
#include "CHumano.h"
class CJugador {
public:
    int numero;
    string nombre;
    virtual void marcar(int x, int y)=0;

};


#endif //SESSION13A_CJUGADOR_H
