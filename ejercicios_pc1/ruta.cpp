#include <iostream>
using namespace std;
int main() {
    int puntos;
    char a;
    do{
        cin>>puntos;
    }while(puntos<2);
    int px1,py1;
    int px2,py2;
    int suma=0;
    for (int b=1; b<=puntos-1;b++){
        if (b==1){
            cin>>px1>>py1;
        }
        cin>>px2>>py2;
        suma+=abs(px2-px1)+abs(py2-py1);
        px1=px2;
        py1=py2;
    }
    cout<<suma;
    return 0;
}