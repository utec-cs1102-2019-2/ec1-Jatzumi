#include <iostream>
using namespace std;
void imprimir(int n, int*array){
    for (int i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int *primo(int n,int m,int &p){
    int contador=0;
    bool primo=true;
    for (int i=n;i<m+1;i++){
        for (int j=2;j*j<=i;j++){
            if(i%j==0){
                primo= false;
            }
        }
        if (primo==true)
            contador++;
    }
    p=contador;
    cout<<p<<"p";
    int *primos=new int[contador];
    int pos=0;

    for (int i=n;i<m+1;i++){int abi=0;
        for (int j=2;j*j<=i;j++){
            if(n%j==0){
                abi++;
            }
        }
        if (abi==0){
            primos[pos]=i;
            pos++;
        }
    }
    return primos;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int p=0;
    int *array=primo(a,b,p);
    imprimir(p, array);
}
//
// Created by jatzu on 8/10/2019.
//

