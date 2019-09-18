#include <iostream>
using namespace std;

int numero_digitos(int n){
    int count=1;
    while (n>10){
        n=n/10;
        count+=1;
    }
    return count;
}
int suma_digitos(int n){
    if (n==0 )
        return 0;
    else{
        int suma=n%10;
        return suma+ suma_digitos(n/10);
    }
}
int main() {
    int n, digitos;
    do{
        cin>> n;
    }while (numero_digitos(n)>5);
    cout<<suma_digitos(n);
}