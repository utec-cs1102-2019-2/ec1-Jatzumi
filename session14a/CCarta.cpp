//
// Created by jatzu on 20/11/2019.
//

#include "CCarta.h"
CCarta::CCarta(int numero, string palo) {
    this->numero=numero;
    this->palo=palo;
}
CCarta::~CCarta() {}
void CCarta::mostrar(){
    cout<<numero<<endl;
    cout<<palo<<endl;
}