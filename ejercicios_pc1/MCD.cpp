#include <iostream>
using namespace std;

int maximo_divisor(int a, int b){
    if (a<b)
        return maximo_divisor(b, a);
    else{
        if (b==0)
            return a;
        return maximo_divisor(b, b%a);
    }
}

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<maximo_divisor(a, b);

}