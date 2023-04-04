#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
//Variaveis tipadas         No C++ todas as variaveis devem ser tipadas
    int idade;
    float altura;
    char nome[20];      //Variavel com limite de 20 caracteres
    string sobrenome;
//Alimentando as variaveis
    cout<<"\tPara efetuarmos o cadastro favor preencher os dados solicitados."<<endl;
    cout<<"Nome: ";
    cin>>nome;
    cout<<"Sobrenome: ";
    cin>>sobrenome;
    cout<<"Altura: ";
    cin>>altura;
//Saida das variaveis 
    cout<<"Ola "<<nome<<" seu cadastro foi realizado com sucesso."<<endl;
    cout<<"Os dados informados foram:"<<endl<<"Nome: "<<nome<<endl<<"Sobrenome: "<<sobrenome<<endl<<"Altura: "<<altura;

    return 0;
}
