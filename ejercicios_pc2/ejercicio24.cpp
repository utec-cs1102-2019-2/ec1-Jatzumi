#include <iostream>
#include <ctime>
using namespace std;
void matrix_nuevo(int filas,int columnas,int **matrix);
void imprimir(int filas,int columnas,int **matrix);
void optimizar(int filas,int columnas, int **matrix,int *kernel[]);
void multiply(int i1, int j1, int i2, int j2, int *matrix[],int *kernel[]);
int main(){
    srand(time(nullptr));
    int filas,columnas;
    cout<<"Ingrese filas:";cin>>filas;
    cout<<"Ingrese columnas:";cin>>columnas;
    int **matrix=new int*[filas];
    matrix_nuevo(filas,columnas,matrix);
    imprimir(filas,columnas,matrix);
    int** matrix_final=matrix;
    int **m_kernel=new int*[3];
    matrix_nuevo(3,3,m_kernel);
    imprimir(3,3,m_kernel);
    optimizar(filas,columnas,matrix_final,m_kernel);
    imprimir(filas,columnas,matrix_final);

}
void matrix_nuevo(int filas,int columnas,int **matrix){
    for (int i=0;i<filas;i++){
        matrix[i]=new int[columnas];
        for (int j=0;j<columnas;j++){
            matrix[i][j]=rand()%2;
        }
    }
}
void imprimir(int filas,int columnas,int **matrix){
    cout<<endl<<"\t";
    for (int k=0;k<columnas;k++){
        cout<<"\t"<<k;
        }
    cout<<endl;
    for (int i=0;i<filas;i++){
        cout<<"\t"<<i<<"|";
        for(int j=0;j<columnas;j++){
            cout<<"\t"<<matrix[i][j];
        }
        cout<<endl;
    }
}
void optimizar(int filas,int columnas, int **matrix,int *kernel[]){
    for (int i=0;i<filas-2;i+=3){
        for(int j=0;j<columnas-2;j+=3){
            multiply(i, j, i+3, j+3, matrix,kernel);
        }
    }
}
void multiply(int i1, int j1, int i2, int j2, int *matrix[],int *kernel[]){
    int multiplicado=0;
    int k_fila=0;
    for (int a=i1;a<i2;a++){
        int k_columna=0;
        for(int b=j1;b<j2;b++){
            multiplicado+=matrix[a][b]*kernel[k_fila][k_columna];
            k_columna+=1;
            }
        k_fila+=1;
    }
    matrix[i1+1][j1+1]=multiplicado;
}
//
// Created by jatzu on 8/10/2019.
//

