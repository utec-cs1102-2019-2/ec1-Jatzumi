#include <iostream>
#include <ctime>
using namespace std;
void es_triangulo_superior(int filas,int columnas,int**matrix);
void nuevo(int filas,int columnas,int **matrix);
void imprimir(int filas,int columnas,int **matrix);
int main(){
    srand(time(nullptr));
    int n;
    cout<<"Numero:";cin >> n;
    int **matrix=new int*[n];
    nuevo(n, n, matrix);
    imprimir(n,n,matrix);
    es_triangulo_superior(n, n, matrix);

}
void nuevo(int filas,int columnas,int **matrix){
    for (int i=0;i<filas;i++){
        matrix[i]=new int[columnas];
        for(int j=0;j<columnas;j++){
            matrix[i][j]=rand()%10;
        }
    }
}
void es_triangulo_superior(int filas,int columnas,int**matrix){
    int point=0;
    int number=0;
    for (int i=0;i<filas;i++){
        for (int j=0;j<point;j++){
            if(matrix[i][j]>0){
                number+=1;
            }
            else
                number=0;
        }
        point+=1;
    }
    if (number==0)
        cout<<"Es triangulo superior ";
    else
        cout<<"No es triangulo superior ";
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
//
// Created by jatzu on 8/10/2019.
//

