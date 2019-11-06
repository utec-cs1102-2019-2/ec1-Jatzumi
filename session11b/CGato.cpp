#include "CGato.h"
CGato::CGato(TipoString pNombre,TipoDecimal pPeso,TipoEntero pCantAlimento) : CAnimal(pNombre, pPeso, pCantAlimento) {
}
CGato::~CGato() {}
int CGato::getVidas()  {
    return m_Vidas;
}
void CGato::setVidas(TipoEntero pVidas) {
    CGato::m_Vidas = pVidas;
}

void CGato::ProduceSonido(ostream &os) {
    os<<m_Nombre<<" el gato dijo: Miauuuu"<<endl;
}
void CGato::Ronroneo(ostream &os){
    os<<m_Nombre<<" ronronea"<<endl;
}

void CGato::Alimentar(ostream &os,CAlimento* pAlimento) {
    if(pAlimento->getNombre()=="Carne"){
        float cantAlimento = 0.3 * pAlimento->getCantidad();
        m_Peso +=cantAlimento;
        m_CantAlimento+=pAlimento->getCantidad();
        os<<m_Nombre<<" está comiendo "<<pAlimento->getNombre()<<" y su peso actual es: "<<m_Peso<<endl;

    }
    else{
        os<<m_Nombre<<" el gato no quiere comer "<<pAlimento->getNombre()<<endl;
    }
} 
 