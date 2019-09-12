#include <iostream>
using namespace std;

int main() {
    char letra='A';
    char *p_letra=&letra;
    char **ptr_letra=&p_letra;
    int n=20;
    int *p_entero=&n;
    int **ptr_entero=&p_entero;
    cout<< "Caracter "<< *p_letra<< " en la ubicacion "<< p_letra<<"\n"<< "Puntero a caracter "<<**ptr_letra<<" en la ubicacion "<<ptr_letra<<"\n";
    cout<< "Entero "<< *p_entero<< " en la ubicacion "<< p_entero<<"\n"<< "Puntero a entero "<<**ptr_entero<<" en la ubicacion "<<ptr_entero;

    return 0;
}

