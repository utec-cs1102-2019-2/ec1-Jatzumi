#include <iostream>
using namespace std;
int main() {
    long int tiempo, segundos,minutos,horas;
    cin>>tiempo;
    horas=tiempo/3600;
    tiempo=tiempo%3600;
    minutos=tiempo/60;
    tiempo=tiempo%60;
    segundos=tiempo;
    if (horas<10)
        cout<<"0"<<horas<<":";
    else
        cout<<horas<<":";
    if (minutos<10)
        cout<<"0"<<minutos<<":";
    else
        cout<<minutos<<":";
    if (segundos<10)
        cout<<"0"<<segundos;
    else
        cout<<segundos;
    return 0;
}