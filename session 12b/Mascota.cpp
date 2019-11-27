//
// Created by jatzu on 7/11/2019.
//

#include "Mascota.h"
Mascota::Mascota(string nombre, string raza, int peso) {
    cout<<"Creando una mascota"<<endl;
    this->nombre=nombre;
    this->raza=raza;
    this->peso=peso;
}
void Mascota::mostrar() {
    cout<<"Imprimiendo Mascota"<<endl;
    cout<<endl;
    cout<<"Nombre:\t"<<nombre<<endl;
    cout<<"Raza:\t"<<raza<<endl;
    cout<<"Peso:\t"<<peso<<endl;

}