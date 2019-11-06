#include "CComida.h"
CComida::CComida() {}
CComida::~CComida() {}
void CComida::setNombre(TipoString nombre) {
    m_Nombre=nombre;
    setPuntos();
}
void CComida::setPuntos() {
    if ( m_Nombre  == "Abarrote" ){
        puntos=puntos+2;
    }
    if (m_Nombre == "Lembas" ){
        puntos+=3;
    }
    if (m_Nombre == "Manzana" ){
        puntos++;
    }
    if (m_Nombre == "Melon" ){
        puntos++;
    }
    if (m_Nombre== "HoneyCake" ){
        puntos+=5;
    }
    if (m_Nombre== "Hongos" ){
        puntos-=10;
    }
    else
        puntos-=1;
}
void CComida::printPuntos(ostream &os) {
    os<<puntos;
}