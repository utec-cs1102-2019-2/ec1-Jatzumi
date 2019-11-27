#include "CPalo.h"
CPalo::CPalo() {
    for (int i=1; i<14;i++){
        CCarta *carta=new CCarta();
        carta->setNumero(i);
        palo.emplace_back(carta);
    }
}
void CPalo::setNombre(string nombre){
    this->nombre=nombre;
}
void CPalo::setColor(string color) {
    this->color=color;
}
CPalo::~CPalo(){}