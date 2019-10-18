#include "Alumno.h"
#include <iostream>
using namespace std;

int main(){
    string nombre,apellido;
    int edad,creditos;
    Alumno *alumno1=new Alumno();
    Alumno *alumno2=new Alumno();
    cout<<"ingrese nombre:";cin>>nombre;
    cout<<"ingrese apellido:";cin>>apellido;
    cout<<"ingrese edad:";cin>>edad;
    cout<<"ingrese creditos:";cin>>creditos;
    alumno1->setNombre(nombre);
    alumno1->setApellidos(apellido);
    alumno1->setEdad(edad);
    alumno1->setCreditos(creditos);
    alumno1->imprimir();
}