#include <iostream>
using namespace std;
void es_par(int *pn){
    if (*pn%2==0)
        cout<<"Es par";
    else
        cout<<"No es par";
}
int main(){
    int a,b;
    cin>>a;cin>>b;
    int *ptr1;
    int *ptr2;
    ptr1=&a;
    ptr2=&b;
    es_par(ptr1);
    cout<<"\n";
    es_par(ptr2);
}