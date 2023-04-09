#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]){
    float catetoad, catetoop, hipotenusa;
    cout<<"Para calcular a hipotenusa favor informar os valores abaixo";
    cout<<endl<<"Informe o valor do cateto oposto: ";
    cin>>catetoop;
    cout<<"Informe o valor do cateto adjacente: ";
    cin>>catetoad;
    cout<<"Segue os valores:\nCateto Oposto: "<<catetoop<<"\nCateto adjacente : "<<catetoad<<"\nHipotenusa: ";
    cout<<hypot(catetoad, catetoop);
    return 0;
}
