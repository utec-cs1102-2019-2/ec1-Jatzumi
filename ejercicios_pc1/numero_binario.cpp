#include <iostream>
#include <cmath>
using namespace std;

int binario(int n,int exponente=0){
    if (n==0)
        return 0;
    else{
        return (n%2*pow(10,exponente))+binario(n/2,exponente+1);
    }
}

int main() {
    int n;
    cin>>n;
    cout<<binario(n);
}