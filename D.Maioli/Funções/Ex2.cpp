#include <iostream>
using namespace std;
int somar(int x, int y){
    int soma;
    soma = x + y;
    return soma;
}int main(int argc, char const *argv[]){
    int x, y;
    cout<<"Informe o primeiro valor: ";
    cin>>x;
    cout<<"Informe o segundo valor: ";
    cin>>y;
    cout<<"O resultado da soma de "<<x<<" + "<<y<<" = "<<somar(x,y);
    return 0;
}
