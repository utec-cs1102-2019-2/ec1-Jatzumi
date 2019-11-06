
#ifndef HERENCIA_GATO_H
#define HERENCIA_GATO_H
#include "Tipos.h"
#include "CAnimal.h"
class CGato: public CAnimal {
private:
    TipoEntero m_Vidas;

public:
    CGato(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento);
    virtual ~CGato();
    TipoEntero getVidas();
    void ProduceSonido(ostream &os);
    void setVidas(TipoEntero pVidas);
    void Alimentar(ostream &os,CAlimento* pAlimento);
    void Ronroneo(ostream &os);
};


#endif //HERENCIA_GATO_H
