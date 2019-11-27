#include "CBaraja.h"
CBaraja::CBaraja() {
    crearBaraja();
}
void CBaraja::crearBaraja() {
    CPalo *corazon=new CPalo();
    corazon->setNombre("♥️");
    corazon->setColor("rojo");
    baraja.emplace_back(corazon);
    CPalo *diamante=new CPalo();
    corazon->setNombre("♦️");
    corazon->setColor("rojo");
    baraja.emplace_back(diamante);
    CPalo *trebol=new CPalo();
    corazon->setNombre("♣️");
    corazon->setColor("negro");
    baraja.emplace_back(trebol);
    CPalo *espada=new CPalo();
    corazon->setNombre("♠️");
    corazon->setColor("negro");
    baraja.emplace_back(espada);
}