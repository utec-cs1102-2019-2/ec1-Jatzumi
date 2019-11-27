#include "Bote.h"
#include <iostream>
#include <ctime>
using namespace std;

Bote::Bote() {
    posX = 0;
    posY = 0;
    srand(time(nullptr));
    velocidadMinima = 0;
    velocidadMaxima = 200;
    velocidadActual = velocidadMinima + (rand() % ( velocidadMaxima - velocidadMinima + 1 ) );
}

void Bote::avanzar() {
    posX = posX + velocidadActual;
    posY = posY + velocidadActual;
    cout<<"Bote avanza"<<endl;
}

void Bote::retroceder() {
    posX = posX - velocidadActual;
    posY = posY - velocidadActual;
    cout<<"Bote retrocede"<<endl;
}