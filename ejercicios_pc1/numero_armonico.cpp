#include <iostream>
#include <iomanip>
using namespace std;

float armonico(int n){
    float num=n;
    if (num==1)
        return n;
    return 1/num + (armonico(num-1));
}

int main() {
    int n;
    cin>>n;
    cout<<fixed<<setprecision(3) <<armonico(n);
}