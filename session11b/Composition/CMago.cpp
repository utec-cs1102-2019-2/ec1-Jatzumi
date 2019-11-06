#include "CMago.h"
CMago::CMago(){}
CMago::~CMago(){}
CMago::CMago(TipoEntero puntos)
                   :m_Animo(puntos)
{
}

void CMago::printMago(ostream &os)
{
      os << m_Name << " esta: ";
       m_Animo.printAnimo(os);
       os<<"\n"<<"puntaje: ";
      Comida->printPuntos(cout);
      os << endl;
}
void CMago::setComida(CComida *pComida) {
    Comida=pComida;
}