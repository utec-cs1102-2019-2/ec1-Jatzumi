
#include "CAnimal.h"
#include "UFunciones.h"
CAnimal::CAnimal(TipoString pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento) {
    m_Nombre = pNombre;
    m_Peso=pPeso;
    m_CantAlimento = pCantAlimento;
}
CAnimal::CAnimal() {}
CAnimal::~CAnimal() {}
TipoString CAnimal::getNombre(){
    return m_Nombre;
}
TipoDecimal CAnimal::getPeso(){
    return m_Peso;
}
TipoEntero CAnimal::getCantAlimento(){
    return m_CantAlimento;
}