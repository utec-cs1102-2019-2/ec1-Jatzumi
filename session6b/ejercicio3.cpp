#include <iostream>
using namespace std;
typedef int type_n;
typedef string type_s;
void imprimir(type_n filas, type_n columnas, type_n **matriz);
int main(){
    type_n filas=0;
    type_n columnas=0;
    cout<<"Ingrese numero de filas:";
    cin>>filas;
    cout<<"Ingrese numero de columnas:";
    cin>>columnas;
    type_n **matriz=new type_n*[filas];
    for (size_t i=0; i<filas; i++){
        matriz[i]=new int [columnas];
        for (size_t j=0; j<columnas;j++){
            matriz[i][j]=rand ()%100;
        }
    }
    imprimir(filas, columnas, matriz);
}
void imprimir(type_n filas, type_n columnas, type_n **matriz){
    for (size_t i=0; i<filas; i++){
        for (size_t j=0; j<columnas;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}
//
// Created by jatzu on 26/09/2019.
//

