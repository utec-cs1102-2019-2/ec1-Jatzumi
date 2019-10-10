#include <iostream>
using namespace std;
void nuevo(int n,int*array){
    for (int i=0;i<n;i++){
        array[i]=rand()%10;
    }
}
void imprimir(int n, int*array){
    for (int i=0;i<n;i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
int* resta(int n,int * array1,int * array2,int &m){
    int a1=0;
    for(int i=0;i<n;i++){
        for (int (j) = 0; (j) < n; ++(j)) {
            if(array1[i]-array2[j]==0){
                a1++;
            }
        }
    }
    m=n-a1;
    int *resta=new int[m];
    int a2=0;
    for(int i=0;i<n;i++){
        int a3=0;
        for (int (j) = 0; (j) < n; ++(j)) {
             if(array1[i]-array2[j]==0){
                 a3++;
             }
         }
         if (a3==0){
             resta[a2]=array1[i];
             a2++;
         }
     }
    return resta;
}
int main(){
    int n=0;
    cin>>n;
    int *array1=new int[n];
    int *array2=new int[n];
    nuevo(n,array1);
    nuevo(n,array2);
    imprimir(n,array1);
    imprimir(n,array2);
    int m=0;
    int *rest=resta(n,array1,array2,m);
    imprimir(m,rest);
    delete[] array1;
    array1=nullptr;
}
//
// Created by jatzu on 8/10/2019.
//

