using namespace std;
#include "Tablero.h"
#include <iostream>

Tablero::Tablero(int filas, int columnas,int minas) {
    this->filas = filas;
    this->columnas = columnas;
    this->minas=minas;
    for(int i=0; i<filas; i++){
        vector<Bloque> fila;
        for(int j=0;j<columnas; j++){
            Bloque *bloque = new Bloque();
            fila.push_back(*bloque);
        }
        this->bloques.push_back(fila);
    }
}

void Tablero::instalar_minas() {
    int min=minas;
    while (min>0){
        int x_aux=rand()%filas;
        int y_aux=rand()%columnas;
        int nominas=0;
        if(bloques[x_aux][y_aux].es_mina)
                            nominas++;

        if(nominas==0){
            this->bloques[x_aux][y_aux].es_mina = true;
            bloques[x_aux][y_aux].mostrar=false;
            min-=1;
        }
}}

void Tablero::mostrar() {
    cout<<"Cantidad de filas "<<this->filas<<endl;
    cout<<"Cantidad de column "<<this->columnas<<endl;
    cout<<endl;
    for (int k=0;k<filas;k++)
        cout<<"\t"<<k;
    cout<<"\n"<<endl;
    for(int i=0; i<this->filas; i++){
        cout<<i;
        for(int j=0; j<this->columnas; j++){
            cout<<"\t";
            if(bloques[i][j].mostrar){
                if(bloques[i][j].es_mina ){
                    cout<<"*";
                }
                else{
                    cout<<bloques[i][j].minas;
                }
            }

        }
        cout<<endl;
    }
    cout<<endl;
}
void Tablero::colocar_numeros() {
    for (int i=0; i<filas;i++){
        for (int j=0;j<columnas;j++){
            bloques[i][j].minas=contar_minas(i,j);
            bloques[i][j].mostrar= false;
        }
    }
}
int Tablero::contar_minas(int x, int y) {
    int total=0;
    for(int i=x-1;i<=x+1;i++){
        if(i>=0 && i<filas){
            for(int j=y-1;j<=y+1;j++){
                if( j>=0 && j<columnas){
                    if(bloques[i][j].es_mina)
                        total++;
                }
            }
        }
    }
    if (bloques[x][y].es_mina)
        total-=1;
    return total;
}
void Tablero::elegir_posicion(int x, int y) {
    cout<<x<<y<<endl;
    if (bloques[x][y].es_mina) {
        mostrar_minas(x,y);
        finalizar= true;

    }
    else{
        cuadrados_disponibles-=1;
        bloques[x][y].mostrar= true;
    }
    comprobar();
}
void Tablero::comprobar() {
    if (cuadrados_disponibles==0){
        finalizar= true;
    }
}
void Tablero::mostrar_minas(int x,int y) {
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            if(bloques[i][j].es_mina){
                bloques[i][j].mostrar= true;
            }
        }
    }
}