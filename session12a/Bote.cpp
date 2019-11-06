#include "Bote.h"
#include <iostream>
#include <ctime>
using namespace std;

Bote::Bote() {
    posX = 0;
    posY = 0;
    srand(time(nullptr));
    velocidadMinima = 0;
    velocidadMaxima = 137;
    velocidadActual = velocidadMinima + (rand() % ( velocidadMaxima - velocidadMinima + 1 ) );
}

void Bote::avanzar() {
    posX = posX + velocidadActual;
    posY = posY + velocidadActual;

}

void Bote::retroceder() {
    posX = posX - velocidadActual;
    posY = posY - velocidadActual;

}