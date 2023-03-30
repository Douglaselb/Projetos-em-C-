// O programa vai ler o nome e a idade informada e depois mostrar se é maior de idade ou nao
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
