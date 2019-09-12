#include <iostream>
using namespace std;
void datos(float &a, float &b){
    cin>>a;
    cin>>b;
}
int main() {
    float pc1=0.0;
    float bonus=0.0;
    datos(pc1,bonus);
    float *ptr_pc1=&pc1;
    *ptr_pc1=pc1+bonus;
    cout<<*ptr_pc1;
    return 0;
}