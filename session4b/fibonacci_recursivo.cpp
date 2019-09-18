#include <iostream>
typedef unsigned long long ull;
using namespace std;


int fib(int n, int p1 = 0, int p2 = 1, int det = 1)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(det < n)
        return fib(n, p2, p1+p2, det+1);
    return p1+p2;
}
int main(){
    cout<< fib(41);
}

