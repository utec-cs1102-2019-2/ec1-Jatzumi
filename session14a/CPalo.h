#include <iostream>
#include <vector>
using  namespace std;

#include "CCarta.h"
#ifndef SESSION14A_CPALO_H
#define SESSION14A_CPALO_H


class CPalo  {
public:
    vector<CCarta> palo;
    string nombre;
    string color;


    CPalo();
    ~CPalo();
    void setNombre(string nombre);
    void setColor(string color);


};


#endif //SESSION14A_CPALO_H
