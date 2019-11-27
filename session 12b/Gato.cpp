//
// Created by jatzu on 7/11/2019.
//

#include "Gato.h"
Gato::Gato(string nombre, string raza, int peso): Mascota (nombre, raza, peso){
}

void Gato::comer() {
    cout<<"El gato "<<nombre<<" esta comiendo"<<endl;
}
void Gato::dormir() {
    cout<<"El gato "<<nombre<<" esta durmiendo"<<endl;
}
void Gato::sonido() {
    cout<<"El gato "<<nombre<<" dice Miau"<<endl;
}
void Gato::mostrar() {
    cout<<"\n************GATO***********"<<endl;
    Mascota::mostrar();
    cout<<"****************************"<<endl;
}