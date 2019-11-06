#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include "Tablero.h"
using namespace std;
int main(){
    srand(time(nullptr));
    int filas,columnas,minas;
    cout<<"Ingrese numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese numero de columnas"<<endl;
    cin>>columnas;
    cout<<"Ingrese numero de minas"<<endl;
    cin>>minas;

    Tablero *buscaminas=new Tablero(filas,columnas,minas);
    buscaminas->instalar_minas();
    buscaminas->colocar_numeros();
    buscaminas->mostrar();
    while (!buscaminas->finalizar ){
        int x=0;
        int y=0;
        cout<<"Ingrese fila:"<<endl;
        cin>>x;
        cout<<"Ingrese columna:"<<endl;
        cin>>y;
        buscaminas->elegir_posicion(x,y);
        if (!buscaminas->finalizar)
            buscaminas->mostrar();
        else{
            buscaminas->mostrar_minas(x,y);
            buscaminas->mostrar();
            cout<<"Intentelo otra vez :(";
        }
    }

}
