#ifndef SESSION11B_CCOMIDA_H
#define SESSION11B_CCOMIDA_H
#include <iostream>
#include "Tipos.h"
using namespace std;
class CComida {
private:
    TipoString m_Nombre;

public:
    TipoEntero puntos = 0;
    CComida();
    virtual ~CComida();
    void setNombre(TipoString nombre);
    void setPuntos();
    TipoEntero getPuntos(){return puntos;};
    void printPuntos(ostream & os);
};


#endif //SESSION11B_CCOMIDA_H
