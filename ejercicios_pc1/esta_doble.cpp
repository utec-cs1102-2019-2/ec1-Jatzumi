#include <iostream>
#include <vector>
using namespace std;
bool esta_en_doble(long int a){
    int doble=a*2;
    bool cond=false;
    vector<int> sd={};
    while (a > 0){
        int digit = a%10;
        a /= 10;
        sd.push_back(digit);
    }
    vector<int> sd2={};
    while (doble > 0){
        int digit2 = doble%10;
        doble /= 10;
        sd2.push_back(digit2);
    }
    for (int c=0;c<sd.size();c++){
        for(int f=0;f<sd2.size();f++){
            if(sd[c]==sd2[f])
                cond=true;
        }
    }
    return cond;
}

int main(){
    long int n;
    cout<<"Ingresa: "<<endl;
    cin>>n;

    cout<<n<<endl;
    cout<<2*n<<endl;
    if(esta_en_doble(n)==1)
        cout<<"n*2 incluye digitos de n";
    else
        cout<<"n*2 no incluye digitos de n";

    return 0;
}