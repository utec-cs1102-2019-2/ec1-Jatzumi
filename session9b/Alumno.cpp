#include <iostream>
#include "Alumno.h"
using namespace std;
void Alumno::setNombre(string nombre) {
    this->nombre=nombre;
}
string Alumno::getNombre() {
    return this->nombre;
}

void Alumno::setApellidos(string apellido) {
    this->apellidos=apellido;
}
string Alumno::getApellidos() {
    return this->apellidos;
}

void Alumno::setEdad(int edad) {
    this->edad=edad;
}
int Alumno::getEdad() {
    return this->edad;
}

void Alumno::setCreditos(int creditos) {
    this->creditos=creditos;
}
int Alumno::getCreditos() {
    return this->creditos;
}
 void Alumno::imprimir() {
    cout<<"NOmbre:"<<this->getNombre()<<" "<<getApellidos()<<endl;
     cout<<"Edad:"<<this->getEdad()<<endl;
     cout<<"Creditos:"<<this->getCreditos()<<endl;
}