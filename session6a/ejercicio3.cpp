#include <iostream>
using namespace std;
typedef int type_n;
type_n promedioFunction(type_n *notas, type_n x);
void imprimir(type_n notas[], type_n x, type_n i);
void mayor_nota(type_n *notas, type_n x);
type_n promedioMenor(type_n *notas, type_n x);
int main(){
    type_n *notas;
    type_n n,a, promedio = 0;
    do{cout<<"Numero de alumnos: ";
        cin>>n;}while(n<1);
    notas = new type_n[n];
    for(size_t i = 0; i <n ; i++) {
        do {
            cout << "ingrese nota:";
            cin >> a;
        } while (a < 0 || a > 20);
        notas[i] = a;
    }
    promedio= promedioFunction (notas, n);
    cout<<"Notas mayores al promedio:";
    imprimir(notas, n, promedio);
    mayor_nota(notas, n);
    cout<<"Nuevo promedio sin nota(s) inferior(es): " <<promedioMenor(notas, n);
}
type_n promedioFunction(type_n *notas, type_n x){
    type_n promedio=0;
    for (size_t a=0;a<x;a++){
        promedio=promedio + notas[a];
    }
    promedio=promedio/x;
    return promedio;
}
void imprimir(type_n notas[], type_n x,type_n promedio){
    for (size_t a=0;a<x;a++){
        if (notas[a]>promedio)
            cout<<notas[a]<<" ";
    }
    cout<<endl;
}
void mayor_nota(type_n notas[], type_n x){
    type_n mayor=0;
    for (size_t a=0;a<x;a++){
        if (notas[a] > mayor){
            mayor=notas[a];
        }}
    cout<<"La nota mayor es:" <<mayor<<endl;
}
type_n promedioMenor(type_n *notas, type_n x){
    type_n menor=20;
    type_n contador=0;
    type_n promedio,suma=0;
    for (size_t a=0;a<x;a++){
        if (notas[a]==menor || notas[a]<menor) {
            menor = notas[a];
            contador += 1;
        }
        else{
            contador=contador;
        }
    }
    for (size_t a=0;a<x;a++){
        suma+=notas[a];
    }
    promedio=(suma-(contador*menor))/(x-contador);
    return promedio;
}

//
// Created by jatzu on 25/09/2019.
//

