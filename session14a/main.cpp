#include "CBaraja.h"
#include <ctime>

#include "CJuego.h"

#include <iostream>
#include <vector>
using  namespace std;
int main(){
    srand(time(nullptr));
    CJuego juego;
    juego.start();
    juego.mostrarCartas();
}