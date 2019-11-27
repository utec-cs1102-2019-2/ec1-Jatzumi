#ifndef SESSION11B_CCOMIDA_H
#define SESSION11B_CCOMIDA_H
#include <iostream>
#include "Tipos.h"
using namespace std;
class CComida {
private:
    TipoString m_Nombre;
public:
    CComida();
    virtual ~CComida();
    void setNombre(TipoString nombre);
    TipoEntero getPuntos();

};


#endif //SESSION11B_CCOMIDA_H
