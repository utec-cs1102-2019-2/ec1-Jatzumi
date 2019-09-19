#include <iostream>
using namespace std;
int main() {
    int hora, minuto;
    char comando;
    hora= rand() %25;
    minuto=rand() %61;
    cout<<"La hora aleatoria es:"<<hora<<":"<<minuto<<endl;
    do{
        cout<<"Presione A , R o S para (A)vanzar , (R)etroceder o (S)alir :";
        cin>>comando;
        if (comando=='A'){
            if (minuto==59){
                minuto=0;
                hora+=1;
                if (hora==23)
                    hora=0;
            }
            else{
                minuto+=1;
            }
        }
        if (comando=='R'){
            if (minuto==0){
                minuto=59;
                hora-=1;
                if (hora==0)
                    hora=23;
            }
            else{
                minuto-=1;
            }
        }
        if (hora<10)
            cout<<"0"<<hora<<":";
        else{
            cout<<hora<<":";
        }
        if (minuto<10)
            cout<<"0"<<minuto<<endl;
        else {
            cout<<minuto<<endl;
        }
    }while (comando!='S');
    cout<<"BYE!";
}