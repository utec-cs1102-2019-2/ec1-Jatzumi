#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,potencia;
    cin>>n;
    for (int a=0;a<n;a++){
        if (n>=pow(2,a)){
            potencia=pow(2,a);
        }
    }
    cout<<potencia;
}