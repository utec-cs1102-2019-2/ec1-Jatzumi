#include "laboratorio.h"
#include "CComputadora.h"
void laboratorio::agregarComputadora(CComputadora &c){
    this->computadoras.push_back(c);
}