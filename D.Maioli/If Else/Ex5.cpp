#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int var, var2, resp;
    cout<<"Informe um numero inteiro: ";
    cin>>var;
    cout<<"Informum segundo numero inteiro: ";
    cin>>var2;
    cout<<"Segue as operacoes disponiveis:";
    cout<<"\n[1]Soma\n[2]Multiplicar\n[3]Contatenar\n[4]Sair do simulador";
    cout<<"\nOperacao escolhida: ";
    cin>>resp;
    switch (resp)
    {
    case 1:
        cout<<"Operacao escolhida "<<var<<" + "<<var2<<" = "<<var+var2;
        break;
    case 2:
        cout<<"Operacao escolhida "<<var<<" x "<<var2<<" = "<<var*var2;
        break;
    case 3:
        cout<<"Operacao escolhida "<<var<<var2;
        break;
    case 4:
        cout<<"Simulador finalizado.";
        break;
    default:
        cout<<"Opcao invalidade.\nSumilador finalizado.";
        break;
    }

    return 0;
}
