#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
void texto_alreves(string &texto, const int medio, int inicio, int fin){
    char letra=texto[fin-1];
    if (fin==1 || inicio==medio){
        texto=texto;
    }
    else{
        texto[fin-1]=texto[inicio];
        texto[inicio]=letra;
        return texto_alreves(texto,  medio,inicio+1,  fin-1);
    }
}
int main(){
    string texto;
    int inicio,medio,fin;
    inicio=0;
    getline(cin,texto);
    fin= texto.size();
    medio=fin/2;
    texto_alreves(texto, medio, inicio, fin);
    cout<<texto;
}