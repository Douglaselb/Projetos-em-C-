// Ler nome e idade e depois mostrar se é maior ou menor de idade

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    string nome;
    int idade;

    cout<<"Digite seu nome: ";
    cin>>nome;
    cout<<"Digite sua idade: ";
    cin>>idade;

    if(idade >= 18){
        cout<<nome<<" pela lei você já responde com um adulto.";
    }else{
        cout<<nome<<" pela lei você ainda e menor de idade.";
    }

    return 0;
}
