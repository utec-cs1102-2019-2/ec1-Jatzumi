#include <iostream>
using namespace std;
void emparejar(int a,int b);
void asteriscos(int asterisco);
void espacios(int espacio);
int main(){
    int n;
    cout<<"Ingrese numero:";cin>>n;
    emparejar(n,n);
}
void emparejar(int n, int num){
    if (n==0)
        return ;
    espacios(n-1);
    asteriscos(num-n+1);
    cout<<"\n";
    emparejar(n-1,num);
}
void espacios(int espacio){
    if (espacio==0)
        return;
    cout<<" ";
    espacios(espacio-1);
}
void asteriscos(int asterisco){
    if (asterisco==0)
        return;
    cout<<"*";
    asteriscos(asterisco-1);
}