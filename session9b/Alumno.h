#ifndef SESSION9B_ALUMNO_H
#define SESSION9B_ALUMNO_H

#include <iostream>
using namespace std;
class Alumno {
private:
    string nombre;
    string apellidos;
    int edad;
    int creditos;
public:
    void setNombre(string nombre);
    string getNombre();

    void setApellidos(string apellidos);
    string getApellidos();

    void setEdad(int edad);
    int getEdad();

    void setCreditos(int creditos);
    int getCreditos();

    void imprimir();

};


#endif //SESSION9B_ALUMNO_H
