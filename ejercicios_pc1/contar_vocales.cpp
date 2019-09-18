#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;
int contar_vocales(string texto, int caracteres){
    if (caracteres==0)
        return 0;
    else if (texto[caracteres-1]=='a' || texto[caracteres-1]=='e' || texto[caracteres-1]=='i' || texto[caracteres-1]=='o' || texto[caracteres-1]=='u' )
        return 1+ contar_vocales(texto, caracteres-1);
    return contar_vocales(texto, caracteres-1);
}
int main() {
    string texto;
    getline(cin,texto);
    int caracteres;
    caracteres=texto.size();
    cout<<contar_vocales(texto, caracteres);
}//
// Created by jatzu on 17/09/2019.
//

