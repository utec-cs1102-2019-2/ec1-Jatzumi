#include <iostream>
#include <ctime>
using namespace std;
typedef unsigned int type_n;
void imprimir(int f, int c, type_n **matrix);
void nuevo(int filas, int columnas, type_n **matrix);
type_n** multiplicar(int filas, int columnas, type_n **matrix_1, type_n **matrix_2);
void maximiza(int i1, int j1, int i2, int j2, type_n *matrix[]);
void optimizar(int filas, int columnas, type_n **matrix);
int main() {
    srand(time(nullptr));
    int filas=0, columnas=0;
    cout<<"filas:";cin >> filas;
    cout<<"columnas:";cin >> columnas;
    type_n **matrix_1 = new type_n*[filas];
    type_n **matrix_2 = new type_n*[filas];
    nuevo(filas, columnas, matrix_1);
    nuevo(filas, columnas, matrix_2);
    imprimir(filas, columnas, matrix_1); 
    imprimir(filas, columnas, matrix_2);
    type_n **matrix_multiply = multiplicar(filas, columnas, matrix_1, matrix_2);
    imprimir(filas, columnas, matrix_multiply);
    optimizar(filas, columnas, matrix_multiply);
    imprimir(filas, columnas, matrix_multiply);
    return 0;
}
void nuevo(int filas, int columnas, type_n **matrix){
    for(int i=0; i < filas; i++){
        matrix[i] = new type_n[columnas];
        for(int j=0; j < columnas; j++){
            matrix[i][j] = rand()%10;
        }
    }
}
type_n** multiplicar(int filas, int columnas, type_n **matrix_1, type_n **matrix_2) {
    type_n **m = new type_n*[filas];
    for(int i=0; i < filas; i++){
        m[i] = new type_n[columnas];
        for(int j=0; j < columnas; j++){
            m[i][j] = matrix_1[i][j] * matrix_2[i][j];
        }
    }
    return m;
}
void optimizar(int filas, int columnas, type_n **matrix){
    for(int i=0; i < filas; i= i + 3){
        for(int j=0; j < columnas; j= j + 3){
            maximiza(i, j, min(i+3, filas), min(j + 3, columnas), matrix);
        }
    }
}
void maximiza(int i1, int j1, int i2, int j2, type_n *matrix[]){
    type_n max = 0;
    int posicion_i=0, posicion_j=0;
    for(int i=i1;i<i2; i++){
        for(int j=j1;j<j2;j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                posicion_i = i;
                posicion_j = j;
            }
        }
    }
    for(int i=i1;i<i2; i++){
        for(int j=j1;j<j2;j++){
            if(i == posicion_i && j == posicion_j){
                matrix[i][j] = max;
            }else{
                matrix[i][j] = 0;
            }
        }
    }
}
void imprimir(int f, int c, type_n **matrix){
    cout<<endl;
    for(int j=0; j<c; j++){
        cout<<"\t"<<j;
    }
    cout<<endl;
    for(int i=0; i<f; i++){
        cout<<i<<"|\t";
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}