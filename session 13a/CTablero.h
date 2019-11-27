#ifndef SESSION13A_CTABLERO_H
#define SESSION13A_CTABLERO_H
#include <iostream>
#include <vector>
#include "CCuadrado.h"
using namespace std;

class CTablero {
public:
    int filas;
    int columnas;
    vector<vector<CCuadrado>> cuadrados;
    CTablero(int x, int y);
    void creaTablero(int x, int y);
};


#endif
