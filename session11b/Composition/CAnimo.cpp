#include "CAnimo.h"

CAnimo::~CAnimo(){}

CAnimo::CAnimo(){}

void CAnimo::setAnimo(TipoEntero puntos)
{
    if (puntos<-5)
        nombre="Enojado";
    if (puntos>=-5 && puntos<=0)
        nombre="Triste";
    if(puntos>0 && puntos<=15)
        nombre="Feliz";
    if(puntos>15)
        nombre="Re feliz";
} 
void CAnimo::printAnimo(ostream &os) {
    os<<nombre;
}
