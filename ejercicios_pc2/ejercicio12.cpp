# include <iostream>
using namespace std ;
int * descomponerDigitos (long int numero , int &n ){
    int copia=numero;
    while(copia > 0){
        copia= copia / 10;
        n+=1;
    }
    int *descomponer=new int[n];
    for(int i=n-1;i>=0;i--){
        descomponer[i]=numero%10;
        numero/=10;
    }
    return descomponer;
}
int * llenarTanques ( int * digitos , int n , int & m ){
    int *tanques=new int[n/2];
    int ver=n-1;
    for(int i=0;i<n/2;i++){
        tanques[i]=digitos[ver]+digitos[m];
        m+=1;
        ver--;
    }
    return tanques;
}
void mostrarTanques ( int * tanques , int m ){
    cout<<m<<endl;
    for(int i=0;i<m;i++){
        cout<<tanques[i]<<endl;
    }
    cout<<endl;
}
int main () {
    long int numero ;
    cout << " Numero encriptado :" ; cin >> numero ;
    int n = 0 , m = 0;
    int * digitos = descomponerDigitos ( numero , n );
    int * tanques = llenarTanques ( digitos , n , m ) ;
    mostrarTanques ( tanques , m ) ;
    return 0;
}

//
// Created by jatzu on 8/10/2019.
//

