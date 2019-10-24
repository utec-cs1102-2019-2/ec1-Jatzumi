#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona(string nombre, int edad, int dni, string nacionalidad) {
    this->nombre=nombre;
    this->edad=edad;
    this->dni=dni;
    this->nacionalidad=nacionalidad;
}
string Persona::getNombre() {
    return this->nombre;
}
void Persona::mostrarPersona() {
    cout<<"--------PERSONA--------"<<endl;
    cout<<"NOmbre:\t\t"<<this->nombre<<endl;
    cout<<"Edad:\t\t"<<this->edad<<endl;
    cout<<"Dni:\t\t"<<this->dni<<endl;
    cout<<"Nacionalidad:\t"<<this->nacionalidad<<endl;

}
