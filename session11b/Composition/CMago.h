#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include "CComida.h"
#include "Tipos.h"
#include "CAnimo.h"
class CMago
{
private:
  TipoString m_Name="Gandalf";
  CAnimo m_Animo;
  vector<CComida*> comidas;

public:
    int puntaje;
  CMago();
  virtual ~CMago();
  CMago(vector<CComida*> comidas);
  int getpuntos();
  void setAnimo();
  //void setComida(CComida *pComida);
  void printMago(ostream &os);
};
#endif