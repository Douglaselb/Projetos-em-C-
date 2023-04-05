//Função simples void print testo

#include <iostream>
#include <string>
using namespace std;
void print_click(){
    cout<<"Click and enjoy";
}int main(int argc, char const *argv[]){
    string nome;
    cout<<"Informe o seu nome: ";
    cin>>nome;
    cout<<"Ola "<<nome<<" vamos para um teste simples de funcao"<<endl;
    print_click();
    return 0;
}
