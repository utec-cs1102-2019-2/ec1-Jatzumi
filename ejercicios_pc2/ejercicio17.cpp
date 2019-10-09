#include <iostream>
using namespace std;
void imprimir(int n,int *matrix);
int pares(int n,int *matrix);
void completar_matrix(int n, int *matrix, int *matrix_par, int *matrix_impar);
int main(){
    int n=0;
    cout<<"Numero:";cin>>n;
    int *matrix=new int[n];
    for (int i=0;i<n;i++){
        cout<<"Valor "<<i+1<<" :";
        cin>>matrix[i];
    }
    imprimir(n,matrix);
    int par=pares(n,matrix);
    int *matrix_par=new int[par];
    int *matrix_impar=new int[n-par];
    completar_matrix(n,matrix,matrix_par,matrix_impar);
    imprimir(par,matrix_par);
    imprimir(n-par,matrix_impar);
}
void imprimir(int n,int *matrix){
    for (int i=0;i<n;i++){
        cout<<matrix[i]<<",";
    }
    cout<<endl;
}
int pares(int n,int *matrix){
    int par=0;
    for (int i=0;i<n;i++){
        if (matrix[i]%2==0)
            par+=1;
    }
    return par;
}
void completar_matrix(int n,int *matrix, int *matrix_par, int *matrix_impar){
    int p1=0;
    int p2=0;
    for (int i=0;i<n;i++){
        if (matrix[i]%2==0){
            matrix_par[p1]=matrix[i];
            p1+=1;
        }
        else{
            matrix_impar[p2]=matrix[i];
            p2+=1;
        }
    }
}
//
// Created by jatzu on 8/10/2019.
//

