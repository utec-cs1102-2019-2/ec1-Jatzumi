#include <iostream>
#include "UFunciones.h"
int main() {
    auto pCarne = new CAlimento("Carne",4);
    auto pVerdura = new CAlimento("Verdura",4);
    auto pFelix = new CGato("Felix",4,0);
    pFelix->Alimentar(cout,pCarne);
    auto pTom = new CGato("Tom",5,0);
    pTom->Alimentar(cout,pVerdura);

    auto pBoby = new CPerro("Boby",4,0);
    pBoby->Alimentar(cout,pVerdura);
    pBoby->Alimentar(cout,pVerdura);
    pBoby->Alimentar(cout,pVerdura);
    mostrarDatosBasicos(cout,pFelix);
    mostrarDatosBasicos(cout,pBoby);
    mostrarDatosBasicos(cout,pTom);
    return 0;
} 