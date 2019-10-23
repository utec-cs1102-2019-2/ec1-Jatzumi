#ifndef SESSION10A_CCOMPUTADORA_H
#define SESSION10A_CCOMPUTADORA_H
#include "CTeclado.h"
#include "CMouse.h"
#include "laboratorio.h"
#include <iostream>
using namespace std;

class CComputadora {
private:
    CTeclado *teclado=new CTeclado();
    CMouse *mouse=new CMouse();
public:
    void mostrar();
};


#endif //SESSION10A_CCOMPUTADORA_H
