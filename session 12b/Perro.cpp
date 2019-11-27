//
// Created by jatzu on 7/11/2019.
//

#include "Perro.h"
Perro::Perro(string nombre, string raza, int peso): Mascota (nombre, raza, peso) {
    cout<<"Creando un Perro"<<endl;
}

void Perro::comer() {
    cout<<"El perro "<<nombre<<" esta comiendo "<<endl;
}

void Perro::dormir() {
    cout<<"El perro "<<nombre<<" esta durmindo zZZ"<<endl;
}

void Perro::sonido() {
    cout<<"El perro "<<nombre<<" dice Guau Guau"<<endl;
}
void Perro::mostrar() {
    cout<<"\n************PERRO***********"<<endl;
    Mascota::mostrar();
    cout<<"****************************"<<endl;
}