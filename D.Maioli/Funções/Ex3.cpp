#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
float calculadora_imc(float x, float y){
    float imc;
    imc = x / (pow(y,2));
    return imc;
}
int main(int argc, char const *argv[]){
    float altura, peso;
    cout<<"Para calcular o seu IMC precisamos de duas informacoes.\nInforme a sua altura: ";
    cin>>altura;
    cout<<"\nAgora informe o seu peso atual: ";
    cin>>peso;
    cout<<"\nSeu IMC e de "<<calculadora_imc(peso, altura);
    return 0;}
