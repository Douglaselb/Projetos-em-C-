// Criterios de avaliação para desconto de impostos 

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

/*
         Valores INSS
    até             desconto
  1693.72             8%
  2822.9              9%
  5646.8              11%
  5646.8++            R$621.04

        Imposto de Renda
    até             desconto
1903.98               -
2826.65              7.5%
3751.05              15%
4664.68              22.5%
4664.68++            27.5%
*/

int main(int argc, char const *argv[])
{
    float salario, ir, inss, salario_liquido;
    printf("Para calcularmos os descontos favor informar o seu salario atual.");
    printf("\nInforme seu salario bruto: ");
    scanf("%f", &salario);
    //  INSS
    if(salario <= 1693.72){
        inss = salario * 0.08;
    }else if(salario > 1693.72 && salario <= 2822.9){
        inss = salario * 0.09;
    }else if(salario > 2822.9 && salario <= 5646.8){
        inss = salario * 0.11;
    }else{
        inss = 621.04;
    }
    //  Imposto de Renda
    if(salario <= 1903.98){
        ir = 0;
    }else if(salario > 1903 && salario <= 2826.65){
        ir = salario * 0.075;
    }else if(salario > 2826.65 && salario <= 3751.05){
        ir = salario * 0.15;
    }else if(salario > 3751.05 && salario <= 4664.68){
        ir = salario * 0.225;
    }else{
        ir = salario * 0.275;
    }

    salario_liquido = salario - (inss + ir);

    cout<<"Salario informado: "<<salario<<endl<<"Desconto INSS: "<<inss<<endl<<"Desconto Imposto de renda: "<<ir<<endl<<"Salario Liquido: "<<salario_liquido<<endl;

    return 0;
}
