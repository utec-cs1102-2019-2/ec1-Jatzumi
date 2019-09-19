#include <iostream>
using namespace std;
typedef double TNumero;
int main(){
    TNumero *pnumero1= nullptr,*pnumero2= nullptr;
    pnumero1=new double;
    pnumero2=new double;
    cout<<"Numero 1:"; cin>>*pnumero1;
    cout<<"Numero 2:"; cin>>*pnumero2;
    cout<<"\n";
    cout<<"La suma es: "<<*pnumero1+*pnumero2<<endl;
    cout<<"La diferencia es: "<<*pnumero1-*pnumero2<<endl;
    cout<<"La multiplicacion es: "<<*pnumero1 * *pnumero2<<endl;
    delete pnumero1;
    delete pnumero2;
    pnumero1= nullptr;
    pnumero2= nullptr;
    return 0;
}
//
// Created by jatzu on 19/09/2019.
//

