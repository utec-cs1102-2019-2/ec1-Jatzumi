#ifndef TIME_H
#define TIME_H
#include "Tipos.h"
class CAnimo
{
  private:
    TipoString nombre;
  public:
    CAnimo();
    virtual ~CAnimo();
    void setAnimo(TipoEntero puntos);
    void printAnimo(ostream &os);
};
#endif