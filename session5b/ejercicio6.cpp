#include <iostream>
using namespace std;
typedef int numero;
void imprimir_encima_promedio(numero *p, numero x){
    for (size_t a=0;a=x;a++){
        if (p[a]>15)
            cout<< p[a];
    }
}
int main(){
    numero *p;
    numero n,a;
    do{cout<<"Numero de alumnos: ";
    cin>>n;}while(n<15);
    p = new numero[n];
    for(size_t i = 0; i <= n ;i++) {
        do {
            cout << "ingrese nota";
            cin >> a;
        } while (a < 0 || a > 20);
        p[i] = a;
    }
    imprimir_encima_promedio(p,n);
}
//
// Created by jatzu on 25/09/2019.
//

