
#include "CTablero.h"
CTablero::CTablero(int x, int y){
    creaTablero(x,y);
}
void CTablero::creaTablero(int x, int y){
    cuadrados.resize(x);
    for (int i=0;i<x;i++){
        cuadrados[i].resize(y);
    }
}