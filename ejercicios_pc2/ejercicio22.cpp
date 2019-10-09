#include <iostream>
#include <ctime>
using namespace std;
void new_matrix(int filas,int columnas,int **matrix);
void imprimir_matrix(int filas,int columnas,int **matrix);
int ** matrix_positivos(int filas,int columnas,int **matrix);
int ** matrix_negativos(int filas,int columnas,int **matrix);
int main(){
    srand(time(nullptr));
    int filas,columnas;
    filas=5;
    columnas=7;
    int **matrix=new int*[filas];
    new_matrix(filas,columnas,matrix);
    imprimir_matrix(filas,columnas,matrix);
    int **matrix_positivo=matrix_positivos(filas,columnas,matrix);
    imprimir_matrix(filas,columnas,matrix_positivo);
    int **matrix_negativo=matrix_negativos(filas,columnas,matrix);
    imprimir_matrix(filas,columnas,matrix_negativo);
}
void new_matrix(int filas,int columnas,int **matrix){
    for (int i=0;i<filas;i++){
        matrix[i]=new int[columnas];
        for (int j=0;j<columnas;j++){
            matrix[i][j]=(rand()%201 )-100;
        }
    }
}
void imprimir_matrix(int filas,int columnas,int **matrix){
    for(int i=0;i<filas;i++){
        for (int j=0;j<columnas;j++){
            if (matrix[i][j]==0){
                cout<<"\t"<<"-";
            }
            else
                cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
int** matrix_positivos(int filas,int columnas,int **matrix){
    int **matrix_positivos=new int*[filas];
    for(int i=0;i<filas;i++){
        matrix_positivos[i]=new int[columnas];
        for (int j=0;j<columnas;j++) {
            if (matrix[i][j] > 0) {
                matrix_positivos[i][j] = matrix[i][j];
            }
            else
                matrix_positivos[i][j]=0;
        }
    }
    return matrix_positivos;
}
int ** matrix_negativos(int filas,int columnas,int **matrix){
    int **matrix_negativos=new int*[filas];
    for(int i=0;i<filas;i++){
        matrix_negativos[i]=new int[columnas];
        for (int j=0;j<columnas;j++) {
            if (matrix[i][j] < 0) {
                matrix_negativos[i][j] = matrix[i][j];
            }
            else
                matrix_negativos[i][j]=0;
        }
    }
    return matrix_negativos;
}
//
// Created by jatzu on 4/10/2019.
//

