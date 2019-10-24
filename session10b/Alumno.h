#include "Persona.h"
#ifndef SESSION10B_ALUMNO_H
#define SESSION10B_ALUMNO_H


class Alumno:Persona {
private:
    int codigo;
public:
    Alumno(string nombre,int edad,int dni,string nacionalidad, int codigo);
    void mostrarAlumno();
};


#endif //SESSION10B_ALUMNO_H
