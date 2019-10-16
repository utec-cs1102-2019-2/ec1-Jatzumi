#include "ejercicio2.h"
#include <iostream>
#include <cmath>
using namespace std;
Cilindro::Cilindro(decimal radio,decimal altura) {
    cout<<"Instanciando el objeto cilindro"<<endl;
    this-> radio=radio;
    this-> altura=altura;
    cout<<radio<<"\t"<<altura<<endl;
}
decimal Cilindro::volumen() {
    return M_PI* pow(radio,2)*altura;
}
decimal Cilindro::area_total() {
    return (2*M_PI* pow(radio,2))+(2*M_PI*radio*altura);
}
decimal Cilindro::area_lateral() {
    return 2*M_PI*radio*altura;
}
Cilindro::~Cilindro() {};