#ifndef SESSION10A_LABORATORIO_H
#define SESSION10A_LABORATORIO_H

#include <vector>
#include "CComputadora.h"
using  namespace std;
class laboratorio {
private:
    vector < CComputadora > computadoras;
public:
    void agregarComputadora(CComputadora &c);
};

#endif //SESSION10A_LABORATORIO_H