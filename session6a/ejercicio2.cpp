#include <iostream>
using namespace std;
typedef int type_n;
int main() {
    cout << "Ejercicio2" << endl;
    int *a=new int [10];
    a[0]=1;
    a[1]=19;
    a[9]=3;
    cout<<"Index"<<"\t"<<"Value"<<"\t"<<"Mem address"<<endl;
    for (int i=0; i<10; i++){
        cout<<i<<"\t"<<a[i]<<"\t"<<&a[i]<<endl;
    }
}
// Created by jatzu on 25/09/2019.
//

