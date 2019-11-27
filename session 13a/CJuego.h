#ifndef SESSION13A_CJUEGO_H
#define SESSION13A_CJUEGO_H
#include "CJugador.h"
#include "CTablero.h"
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class CJuego {
public:
    T jugador1;
    T jugador2;
    CTablero tablero;

};

#endif //SESSION13A_CJUEGO_H
