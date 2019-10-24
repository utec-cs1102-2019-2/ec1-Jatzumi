#include <iostream>
#include <vector>
#include "Persona.h"
#include "Alumno.h"

using namespace std;
int main(){
    Persona *persona1=new Persona("Juanito",18,83293422,"Peruana");
    persona1->mostrarPersona();
    Alumno *alvaro=new Alumno("Juanito",18,83293422,"Peruana",4567);
    alvaro->mostrarAlumno();
}