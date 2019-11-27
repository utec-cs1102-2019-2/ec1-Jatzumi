#include <iostream>
#include <vector>
using  namespace std;
#include <iostream>
#include "CBaraja.h"
#include "CCarta.h"
#ifndef SESSION14A_CJUEGO_H
#define SESSION14A_CJUEGO_H
using namespace std;

class CJuego {
public:
    vector<CCarta> cartas;

    CJuego();
    void start();
    void mostrarCartas();

};


#endif //SESSION14A_CJUEGO_H
