#include <iostream>
using namespace std;
typedef int type_n;
void imprimir(type_n *numeros, type_n n);
void llenar_multiplos(type_n *numeros, type_n n, type_n m, type_n *multiplo);
type_n contar_multiplos(type_n *numeros, type_n n, type_n m);
int main(){
    type_n *numeros;
    type_n n;
    type_n *n5;
    type_n *n7;
    cout<<"Ingrese numero:";
    cin>>n;
    numeros=new type_n[n];
    for (size_t i=0; i<n; i++){
        numeros[i]=rand()%1000;
    }
    imprimir(numeros, n);
    type_n nom=contar_multiplos(numeros,n,5);
    llenar_multiplos(numeros, n, 5, n5);
    cout<<n5[0];
    for (size_t i=0; i<nom; i++){
        cout<<n5[i];
    }
}
void imprimir(type_n *numeros, type_n n){
    for (size_t a=0; a<n; a++){
        cout<<a<<"\t" <<numeros[a]<<endl;
    }
}
type_n contar_multiplos(type_n *numeros, type_n n, type_n m){
    type_n contador=0;
    for (size_t a=0; a<n; a++){
        if (numeros[a]%m==0)
            contador+=1;
    }
    return contador;
}
void llenar_multiplos(type_n *numeros, type_n n, type_n m, type_n *multiplo){
    type_n c=0;
    for (size_t a=0; a<n; a++){
        if (numeros[a]%m==0){
            multiplo[c]=numeros[a];
            c+=1;
        }
    }
}