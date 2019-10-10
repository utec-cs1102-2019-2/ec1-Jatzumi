#include <iostream>
#include <ctime>
using namespace std;
void nuevo(int n,int *array){
    for(int i=0;i<n;i++){
        array[i]=rand()%21;
    }
}
void imprimir(int n,int *matrix){
    for (int i=0;i<n;i++){
        cout<<matrix[i]<<",";
    }
    cout<<endl;
}
void cambiar(int *puntero, int nuevo,int posicion){
    puntero[posicion]=nuevo;
}
int main(){
    int n;
    cin>>n;
    int *puntero=new int[n];
    nuevo(n,puntero);
    imprimir(n,puntero);
    int posicion,nuevo;
    do{
        cout<<"Ingrese posicion";
        cin>>posicion;
        if (posicion==-1)
            break;
        else{
        cout<<"ingrese nuevo valor";
        cin>>nuevo;}
        cambiar(puntero,nuevo,posicion);
        imprimir(n,puntero);
    }while(posicion!=-1);

}
//
// Created by jatzu on 9/10/2019.
//

