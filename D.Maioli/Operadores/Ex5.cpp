#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]){
    float catetoad, catetoop, ca, co, catetos, hipo;
    cout<<"Para calcular a hipotenusa favor informar os valores abaixo";
    cout<<endl<<"Informe o valor do cateto oposto: ";
    cin>>catetoop;
    cout<<"Informe o valor do cateto adjacente: ";
    cin>>catetoad;
    ca = pow(catetoad, 2);
    co = pow(catetoop, 2);
    catetos = ca + co;
    hipo = pow(catetos, 0.5);
    cout<<"Segue os valores:\nCateto Oposto: "<<catetoop<<"\nCateto adjacente : "<<catetoad<<"\nHipotenusa: "<<hipo<<endl;
    return 0;
}