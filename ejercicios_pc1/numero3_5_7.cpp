#include <iostream>
using namespace std;
bool validar(int n){
    if (n%7==0 || n%3==0 || n%5==0)
        return true;
}
int reduce_Multiplo(int n, int num){
    if (n==0)
        return 0;
    return 1+ reduce_Multiplo(n-num, num);
}
int main() {
    int n;
    do {
        cout<<"Ingrese un numero multiplo de 3, 5 o 7:";
        cin>>n;
    }while (validar(n)==false);

    if (n%7==0){
        cout<<"Numeo de veces que se encentra contenido el entero 7:"<<reduce_Multiplo(n,7)<<endl;
        return 0 ;
    }
    if (n%5==0) {
        cout << "Numeo de veces que se encentra contenido el entero 5:"<<reduce_Multiplo(n, 5) << endl;
        return 0;
    }
    else {
        cout<<"Numeo de veces que se encentra contenido el entero 3:"<<reduce_Multiplo(n,3)<<endl ;
        return 0;
    }
}
