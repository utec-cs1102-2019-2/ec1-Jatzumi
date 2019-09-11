#include <iostream>
using namespace std;
int main() {
    int ival=42;
    int *p= &ival;
    cout<<p<<"\t"<<*p<<"\t"<<&p;
    return 0;
}