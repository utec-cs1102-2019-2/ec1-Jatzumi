#include "CMago.h"
CMago::CMago(){}
CMago::~CMago(){}
CMago::CMago(vector<CComida*> comidas)
{
    this->comidas=comidas;
    setAnimo();
}
int CMago::getpuntos() {
    int puntos=0;
    for(int i=0;i<comidas.size();i++){
        puntos+=comidas[i]->getPuntos();
    }
    puntaje=puntos;

    return puntos;
}

void CMago::setAnimo() {
    m_Animo.setAnimo(getpuntos());
}

void CMago::printMago(ostream &os)
{
      os << m_Name << " esta: ";
       m_Animo.printAnimo(os);
       os<<"\n"<<"puntaje: ";
      os<<puntaje;
      os << endl;
}
/*void CMago::setComida(CComida *pComida) {
    comidas=pComida;
}*/
