#ifndef EVENT_H
#define EVENT_H

#include "CComida.h"
#include "Tipos.h"
#include "CAnimo.h"
class CMago
{
private:
  TipoString m_Name="Gandalf";
  CAnimo m_Animo;
  CComida *Comida;
public:
  CMago();
  virtual ~CMago();
  CMago(TipoEntero puntos);
  void setComida(CComida *pComida);
  void printMago(ostream &os);
};
#endif