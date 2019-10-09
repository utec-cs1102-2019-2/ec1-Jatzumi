#include <iostream>
using namespace std;
void nuevo(int n,int*array){
    for(int i=0;i<n;i++){
        array[i]=rand()%21;
    }
}
void imprimir(int n, int*array){
    for (int i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int main(){
    int n;cin>>n;
    int *array1=new int[n];
    int *array2=new int[n];
    nuevo(n,array1);
    imprimir(n,array1);
    nuevo(n,array2);
    imprimir(n,array2);
    int *temporal=array2;
    array2=array1;
    array1=temporal;
    imprimir(n,array1);
    imprimir(n,array2);
}
//
// Created by jatzu on 8/10/2019.
//

