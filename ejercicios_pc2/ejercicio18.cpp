#include <iostream>
#include <ctime>
using namespace std;
void imprimir(int filas,int columnas,int **matrix){
    cout<<endl<<"\t";
    for (int a=0; a<columnas;a++){
        cout<<"\t"<<a;
    }
    cout<<endl;
    for (int a=0; a<filas;a++){
        cout<<"\t"<<a<<"|";
        for (int b=0;b<columnas;b++){
            cout<<"\t"<<matrix[a][b];
        }
        cout<<endl;
    }
    cout<<endl;
}
void nuevo(int filas,int columnas,int** matrix){
    for(int i=0;i<filas;i++){
        matrix[i]=new int [columnas];
        for(int j=0;j<columnas;j++){
            matrix[i][j]=rand()%100;
        }
    }
}
void dividir(int filas,int columnas,int **matrix,int **matrix_1,int **matrix_2){
    for(int i=0;i<filas;i++){
        matrix_1[i]=new int [columnas/2];
        for(int j=0;j<columnas/2;j++){
            matrix_1[i][j]=matrix[i][j];
        }
    }
    for(int i=0;i<filas;i++){
        int punto=0;
        matrix_2[i]=new int [columnas/2];
        for(int j=columnas/2;j<columnas;j++){
            matrix_2[i][punto]=matrix[i][j];
            punto+=1;
        }
    }
}
int main(){
    srand(time(nullptr));
    int filas,columnas;
    do{
        cout<<"filas:";cin>>filas;
    }while (filas<5);
    do{
        cout<<"columna:";cin>>columnas;
    }while (columnas%2!=0);
    int **matrix=new int*[filas];
    nuevo(filas,columnas,matrix);
    imprimir(filas,columnas,matrix);
    int **matrix_1=new int*[filas];
    int **matrix_2=new int*[filas];
    dividir(filas,columnas,matrix,matrix_1,matrix_2);
    imprimir(filas,columnas/2,matrix_1);
    imprimir(filas,columnas/2,matrix_2);
}
//
// Created by jatzu on 8/10/2019.
//

