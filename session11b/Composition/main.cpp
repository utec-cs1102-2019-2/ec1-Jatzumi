#include "CMago.h"
#include "CComida.h"

int main() {
    CComida *Comida1=new CComida();
    Comida1->setNombre("Hongos");
    CMago * pMago = new CMago(Comida1->getPuntos());
    pMago->setComida(Comida1);
    pMago->printMago(cout);

  }