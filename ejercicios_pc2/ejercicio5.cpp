#include <iostream>
#include <ctime>
using namespace std;
void letras(string palabra,int n){
    int contador=0;
    char letra=palabra[0];
    for(int i=1;i<n;i++){
        if(letra==palabra[i]){
            contador++;
        }
        else{
            letra=palabra[i];
        }
    }
    if (contador>=1)
        cout<<"si tiene letras dobles";
    else
        cout<<"no tiene letras dobles";
}

int main(){
    string palabra;
    getline(cin,palabra);
    int n=palabra.size();
    letras(palabra,n);

}
//
// Created by jatzu on 9/10/2019.
//

