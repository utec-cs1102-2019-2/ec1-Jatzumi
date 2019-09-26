#include <iostream>
using namespace std;
typedef int type_n;
typedef string type_s;
void imprimir_tabla(type_n *codigo, type_s *nombre, type_n *edad , type_s *sexo, type_n n);
int main(){
    type_n n;
    cout<<"Ingrese la cantidad de alumnos:";
    cin>>n;
    type_s *nombre=new type_s[n];
    type_s *sexo=new type_s[n];
    type_n *edad=new type_n[n];
    type_n *codigo=new type_n[n];
    for (size_t a=0; a<n; a++){
        cout<<"Ingrese codigo:";
        cin>>codigo[a];
        cout<<"Ingrese nombre:";
        cin>>nombre[a];
        cout<<"Ingrese edad:";
        cin>>edad[a];
        cout<<"Ingrese sexo:";
        cin>>sexo[a];
    }
    imprimir_tabla(codigo, nombre, edad ,sexo, n);
}
void imprimir_tabla(type_n *codigo, type_s *nombre, type_n *edad , type_s *sexo,type_n n){
    cout<<"codigo"<<"\t"<<"nombre"<<"\t"<<"edad"<<"\t"<<"sexo"<<endl;
    for (size_t a=0; a<n; a++){
        cout<<codigo[a]<<"\t"<<nombre[a]<<"\t"<<edad[a]<<"\t"<<sexo[a]<<endl;
    }
}
//
// Created by jatzu on 26/09/2019.
//

