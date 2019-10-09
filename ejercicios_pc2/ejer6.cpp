#include <stdio.h>
#include <iostream>
#include "ejercicio6.h"
using namespace std;
void imprimir(int n, int*array){
    for (int i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int *primo(int n,int m){
    int contador=0;
    int primo=0;
    for (int i=n;i<m+1;i++){
        for (int j=n+1;j<m;i++){
            if(n%j==0){
                contador+=1;
            }
        }
        if (contador==0)
            primo++;
    }
    int *primos=new int[primo];
    int pos=0;
    for (int i=n;i<m+1;i++){
        for (int j=n+1;j<m;i++){
            if(n%j==0){
                primos[pos]=i;
                pos++;
            }
        }
    }
    return primos;
}
//
// Created by jatzu on 8/10/2019.
//

