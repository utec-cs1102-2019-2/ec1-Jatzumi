#include <iostream>
#include <math.h>
using namespace std;
int verificar_primos(int n, int &suma);
int main(){
    int n,suma=0;
    cout<<"Ingrese numero:"; cin>>n;
    for (int j=0; j<=n;j++){
        verificar_primos(j, suma);
    }
    cout<<"\nPRIMOS:"<<suma;
    return 0;
}
int verificar_primos(int n, int &suma){
    int contador=0;
    for (int a=1; a<=n; a++){
        if (n%a==0)
            contador++;
    }
    if (contador==2){
        cout<<n<<" ";
        suma++;
    }
    return 0;
}