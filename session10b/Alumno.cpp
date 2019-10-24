#include "Alumno.h"
#include "Persona.h"
#include <iostream>
using namespace std;
Alumno::Alumno(string nombre, int edad, int dni, string nacionalidad, int codigo):Persona(nombre,edad,dni,nacionalidad) {
    this->codigo=codigo;
}
void Alumno::mostrarAlumno() {
    this->mostrarPersona();
    cout<<"Codigo:\t\t"<<this->codigo<<endl;
}