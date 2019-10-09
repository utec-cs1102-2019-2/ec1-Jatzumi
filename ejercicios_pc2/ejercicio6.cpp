#include "ejercicio6.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int *array=primo(a,b);
    imprimir(b-a, array);
}
//
// Created by jatzu on 8/10/2019.
//

