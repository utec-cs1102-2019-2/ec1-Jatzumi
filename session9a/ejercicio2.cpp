#include "ejercicio2.h"
#include <iostream>
#include <ctime>
using namespace std;
typedef float decimal;
int main(){
    srand(time(nullptr));
    for (int i=0;i<1000;i++){
        decimal radio,altura;
        radio=rand()%9+1;
        altura=rand()%9+1;
        Cilindro * cilindro=new Cilindro(radio, altura);
        cout<< cilindro->volumen()<<"\t\t"<<cilindro->area_lateral()<<"\t\t"<<cilindro->area_total()<<endl;
    }
}
