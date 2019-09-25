#include <iostream>
using namespace std;
typedef int TNumero;
void intercambiar(TNumero *a, TNumero *b){
    swap(a,b);
}
int main(){
    TNumero *ptr_a= nullptr,*ptr_b= nullptr;
    ptr_a=new TNumero;
    ptr_b=new TNumero;
    cout<<"Numero 1:"; cin>>*ptr_a;
    cout<<"Numero 2:"; cin>>*ptr_b;
    cout<<*ptr_a<<"\t"<<*ptr_b<<endl;
    intercambiar( ptr_a, ptr_b);
    cout<<*ptr_a<<"\t"<<*ptr_b;
    delete ptr_a;
    delete ptr_b;
    ptr_a= nullptr;
    ptr_b= nullptr;

    return 0;
}
//
// Created by jatzu on 25/09/2019.
//

