#include <iostream>
#include <vector>
using namespace std;
typedef int type_n;
int main(){
    type_n n;
    cout<<"Ingrese numero de elementos:";
    cin>>n;
    vector <type_n > vector1(n,0);
    for (size_t i=0; i<n ; i++){
        cout<<"Ingrese elemento:";
        cin>> vector1[i];
    }
    for (int j=n-1; j>=0;j--){
        cout<<vector1[j]<<",";
    }
}

/*
 v1.push_back=agrega elemento al final
 v1.emplace_back
 v1.insert(begin(
 v1.resize(a,b) ......agrega el tamaño hasta a con valores b
 v1[1]=v1.at(1)
 v1.pop_back ......elimina ultimo

 */

//
// Created by jatzu on 3/10/2019.
//

