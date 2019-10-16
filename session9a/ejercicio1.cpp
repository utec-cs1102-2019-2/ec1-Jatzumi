#include "ejercicio1.h"
#include <iostream>
using namespace std;
typedef float decimal;
int main(){
    decimal lado1,lado2,lado3;
    for (int i=0;i<1000;i++) {
        lado1 = rand() % 9+1;
        lado2 = rand() % 9+1;
        lado3 = rand() % 9+1;
        Ctriangulo *triangulo = new Ctriangulo(lado1, lado2, lado3);
        cout <<  "\t" << triangulo->area()<<endl;
    }
}


