#include <iostream>
#include <ctime>
using namespace std;
void nuevo(int n,int *array){
    for(int i=0;i<n;i++){
        array[i]=rand()%21;
    }
}
void numero_alto(int n,int *array){
    int n1=0;int n2=0;int n3=0;
    for (int i=0;i<n;i++){
        if(n1<array[i]){
            n3=n2;
            n2=n1;
            n1=array[i];
        }
        else if(n2<array[i]){
            n3=n2;
            n2=array[i];
        }
        else if(n3<array[i]){
            n3=array[i];
        }
    }
    cout<<n1<<"\t"<<n2<<"\t"<<n3;
}
void imprimir(int n,int *matrix){
    for (int i=0;i<n;i++){
        cout<<matrix[i]<<",";
    }
    cout<<endl;
}
int main(){
    srand(time(nullptr));
    int n;
    cin>>n;
    int *array=new int[n];
    nuevo(n,array);
    imprimir(n,array);
    numero_alto(n,array);
}
//
// Created by jatzu on 8/10/2019.
//

