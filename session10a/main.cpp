#include <iostream>
#include "CComputadora.h"
#include "CMouse.h"
#include "CTeclado.h"
using namespace std;

int main(){
    CComputadora *computadora=new CComputadora();
    computadora->mostrar();
    laboratorio *l = new laboratorio();
    l->agregarComputadora(*computadora);

}
/*uso: simplemento
composicion: si elimino el que lo contiene también se elimina la composición
 agregación: conjunto de cosas compuesto por objetos
 */
