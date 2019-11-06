#ifndef UFUNCIONES_H
#define UFUNCIONES_H
#include "CGato.h"
#include "CPerro.h"
template <typename T>
void mostrarDatosBasicos(ostream &os,T* &objeto)
{
    os<<"\n------- Datos ------\n";
    os<<"Nombre : "<<objeto->getNombre()<<endl;
    os<<"Cantidad Comida: "<<objeto->getCantAlimento()<<endl;
    os<<"Peso : "<<objeto->getPeso()<<endl;
    objeto->ProduceSonido(os);
    auto gato= dynamic_cast<CGato*>(objeto);
    if (gato != nullptr)
        gato->Ronroneo(os);
    auto perro= dynamic_cast<CPerro*>(objeto);
    if (perro != nullptr)
        perro->Menea(os);
}
#endif
 