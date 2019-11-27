#include "CJuego.h"
CJuego::CJuego() {
}
void CJuego::start() {
    CBaraja *baraja=new CBaraja();
    baraja->crearBaraja();
    for (int i=0;i<4;i++){
        cartas.emplace_back(baraja[rand()%12+1]);
    }
}

void CJuego::mostrarCartas() {
    for(int i=0;i<cartas.size();i++){
        cout<<cartas[i].getNumero()<<endl;
    }
}