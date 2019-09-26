#include <iostream>
using namespace std;
typedef int type_n;
int main(){
    int A[7]={3,41,35,35,25,17,3};

    cout<<"Index"<<"\t"<<"Value"<<"\t"<<"Mem address"<<endl;
    for (int a=0; a<7; a++){
        cout<<a<<"\t"<<A[a]<<"\t"<<&A[a]<<endl;
    }
}
//
// Created by jatzu on 25/09/2019.
//

