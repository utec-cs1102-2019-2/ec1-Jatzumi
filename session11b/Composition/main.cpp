#include "CMago.h"
#include "CComida.h"
#include <vector>
int main() {
    CComida *Comida1=new CComida();
    Comida1->setNombre("Hongos");
    CComida *Comida2=new CComida();
    Comida2->setNombre(    "HoneyCake" );

    vector <CComida*> comidas;
    comidas.push_back(Comida1);
    comidas.push_back(Comida2);
    CMago * pMago = new CMago(comidas);

    pMago->printMago(cout);


  }