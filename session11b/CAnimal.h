#ifndef HERENCIA_ANIMAL_H
#define HERENCIA_ANIMAL_H
#include "Tipos.h"
#include "CAlimento.h"
class CAnimal {
protected:
    TipoString m_Nombre;
    TipoDecimal m_Peso;
    TipoEntero m_CantAlimento;
public:
    CAnimal(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    CAnimal();
    virtual ~CAnimal();
    TipoString getNombre();
    TipoDecimal getPeso();
    TipoEntero getCantAlimento();
    virtual void ProduceSonido(ostream &os)=0;
    virtual void Alimentar(ostream &os,CAlimento* pAlimento)=0;
};


#endif //HERENCIA_ANIMAL_H
