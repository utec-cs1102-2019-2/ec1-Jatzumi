#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
typedef int type_n;
void imprimir(vector<int> v);
void limpiar(vector<int> &vector1);
vector<int> nuevo(int n);
int main(){
    srand( time (nullptr));
    type_n filas,columnas;
    cout<<"Ingrese numero de filas:";
    cin>>filas;
    vector <type_n > vector1=nuevo(n);
    type_n v=0;
    imprimir(vector1);
    limpiar(vector1);
    imprimir(vector1);
}
void imprimir(vector<int> vector1){
    cout<<endl;
    for(int i=0; i<vector1.size(); i++){
        cout<<vector1[i]<<",";
    }
}
void limpiar(vector<int> &vector1){
    for(int i=0; i < vector1.size(); i++){
        if(vector1[i] % 3 == 0){
            vector1.erase(vector1.begin() + i);
        }
    }
}
vector<int> nuevo(int n){
    vector<int> vector1(n, 0);
    for(int i=0; i < vector1.size(); i++){
        vector1[i] = rand() % 31;
    }
    return vector1;
}
//
// Created by jatzu on 3/10/2019.
//

