#include "CMouse.h"
#include <iostream>
using namespace std;
void CMouse::printDescription(){
    cout<<"-----------------------"<<endl;
    cout<<"Mouse features:"<<endl;
    cout<<this->color[0]<<" "<<this->color[1] << this->color[2]<<endl ;
    cout<<this->precision<<endl;
    cout<<"-----------------------";
}