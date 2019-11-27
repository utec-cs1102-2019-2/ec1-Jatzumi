#ifndef SESSION14A_CCARTA_H
#define SESSION14A_CCARTA_H
#include <iostream>
#include <vector>
using  namespace std;

class CCarta {
    string palo;
    int numero;
public:
    CCarta(int numero, string palo);
    virtual ~CCarta();
    int mostrar();
};


#endif //SESSION14A_CCARTA_H
