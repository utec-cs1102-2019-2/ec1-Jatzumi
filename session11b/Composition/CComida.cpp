#include "CComida.h"
CComida::CComida() {}
CComida::~CComida() {}
void CComida::setNombre(TipoString nombre) {
    this->m_Nombre=nombre;
}
TipoEntero CComida::getPuntos(){
    int punt=0;
    if ( m_Nombre  == "Abarrote" ){
        punt=punt+2;
    }
    if (m_Nombre == "Lembas" ){
        punt+=3;
    }
    if (m_Nombre == "Manzana" ){
        punt=punt+1;
    }
    if (m_Nombre == "Melon" ){
        punt++;
    }
    if (m_Nombre== "HoneyCake" ){
        punt+=15;
    }
    if (m_Nombre== "Hongos" ){
        punt-=10;
    }
    else
        punt-=1;
    return punt;
}