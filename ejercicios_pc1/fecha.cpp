#include <iostream>
using namespace std;
bool verificar(int dia, int mes, int year){
    int dias_mes[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (mes>12 || mes<1)
        return false;
    if ((year%4==0 && year&100!=0) || year%400==0)
        dias_mes[1]++;
    mes-=1;
    if (dia>dias_mes[mes] || dia<0)
        return false;
    return true;
}
int main() {
    int dia, mes, year;
    cout<<"dia:";cin>>dia;
    cout<<"mes:";cin>>mes;
    cout<<"anio:";cin>>year;
    if (verificar(dia,mes,year)==true)
        cout<<"Correcta";
    else{cout<<"Incorrecta";}
    return 0;
}