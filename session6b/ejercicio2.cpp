#include <iostream>
using namespace std;
typedef int type_n;
typedef string type_s;
type_n promedioFunction(type_n *notas, type_n n);
void imprimir(type_n notas[], type_n n, type_n promedio);
type_n nota_aleatoria();
void mayor_nota(type_n notas[], type_n x);
int main(){
    type_n n;
    do{
    cout<<"Ingrese numero de alumnos:";
    cin>>n;
    }while(n<1);
    type_n *notas=new type_n(n);
    for (size_t i=0; i<n; i++){
        notas[i]=nota_aleatoria();
    }
    type_n promedio=0;
    imprimir(notas, n,0);
    promedio=promedioFunction(notas,n);
    cout<< "El promedio es:"<<promedio<<endl;
    cout<<"Notas mayores al promedio:";
    imprimir(notas, n,promedio);
    mayor_nota( notas,  n);
    delete []notas;
    notas= nullptr;
}
void imprimir(type_n notas[], type_n n, type_n promedio){
    for (size_t a=0; a < n; a++){
        if (notas[a]>promedio)
            cout<<notas[a]<<" ";
    }
    cout<<endl;
}
type_n promedioFunction(type_n *notas, type_n n){
    type_n promedio=0;
    for (size_t a=0; a < n; a++){
        promedio=promedio + notas[a];
    }
    promedio= promedio / n;
    return promedio;
}
void mayor_nota(type_n notas[], type_n x){
    type_n mayor=0;
    for (size_t a=0;a<x;a++){
        if (notas[a] > mayor){
            mayor=notas[a];
        }}
    cout<<"La nota mayor es:" <<mayor<<endl;
}
type_n nota_aleatoria(){
    type_n nota;
    nota=rand()%21;
    return nota;
}
//
// Created by jatzu on 26/09/2019.
//

