#ifndef HERENCIA_ALIMENTO_H
#define HERENCIA_ALIMENTO_H
#include "Tipos.h"
class CAlimento {
protected:
    TipoString m_Nombre;
    TipoEntero m_Cantidad;
public:
    CAlimento(TipoString, TipoEntero);
    ~CAlimento();
    TipoEntero getCantidad();
    TipoString getNombre();
};

#endif //HERENCIA_ALIMENTO_H
