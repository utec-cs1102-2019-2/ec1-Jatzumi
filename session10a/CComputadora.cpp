#include "CComputadora.h"
using namespace std;
void CComputadora::mostrar() {
    cout<<"Mostrando computadora"<<endl;
    cout<<"Keyboard Features:"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<this->teclado->getDescription()<<endl;
    cout<<"-----------------------"<<endl;
    this->mouse->printDescription();
}