#include <iostream>
using namespace std;
typedef int TNumero;
void intercambiar(TNumero &a, TNumero &b){
    swap(a,b);
}
int main(){
    TNumero a=10;
    TNumero b=20;
    cout<<a<<"\t"<<b<<endl;
    intercambiar(a,b);
    cout<<a<<"\t"<<b;

    return 0;
}


//
// Created by jatzu on 24/09/2019.
//

