#include <iostream>
#include "Bloque.h"
#include <vector>
using namespace std;
#ifndef SESSION11A_TABLERO_H
#define SESSION11A_TABLERO_H

class Tablero {
private:
    vector<vector<Bloque>> bloques;
    int filas,columnas,minas;
    int cuadrados_disponibles=(filas*columnas)-minas;
public:
    bool finalizar= false;
    Tablero(int filas,int columnas,int minas);
    void instalar_minas();
    void mostrar();
    int contar_minas(int x,int y);
    void colocar_numeros();
    void elegir_posicion(int x,int y);
    void comprobar();
    void mostrar_minas(int x, int y);
};


#endif //SESSION11A_TABLERO_H
