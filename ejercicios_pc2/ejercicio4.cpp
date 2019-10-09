#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
void imprimir(int n,float *matrix){
    for (int i=0;i<n;i++){
        cout<<matrix[i]<<",";
    }
    cout<<endl;
}
float promedio(int n,float *matrix){
    float promedio=0;
    for (int i=0;i<n;i++){
        promedio+=matrix[i];
    }
    return promedio/n;
}
float varianza(int n,float promedio,float *matrix){
    float varianza=0;
    for (int i=0;i<n;i++){

        varianza+=(pow(matrix[i]-promedio,2));
    }
    return varianza/(n-1);
}
int main(){
    srand(time(nullptr));
    int n;
    cin>>n;
    float *array=new float[n];
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    imprimir(n,array);
    float pro=promedio(n,array);
    float var=varianza(n,pro,array);
    cout<<var;

}
//
// Created by jatzu on 8/10/2019.
//

