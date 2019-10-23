#include <iostream>
#ifndef SESSION10A_CTECLADO_H
#define SESSION10A_CTECLADO_H
using namespace std;

class CTeclado {
private:
    string m_lang="ES";
    string m_marca="LENOVO";
public:
    string getDescription();
};


#endif //SESSION10A_CTECLADO_H
