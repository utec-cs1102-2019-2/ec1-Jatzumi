#include <iostream>
using namespace std;
void invertir(long int &n){
    while (n>10){
        printf("%ld",n%10 );
        n=n/10;
    }
    printf("%ld", n);
}
int main() {
    long int numero;
    cin>>numero;
    invertir(numero);
    return 0;
}