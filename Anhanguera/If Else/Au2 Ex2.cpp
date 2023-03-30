// Exemplo do uso do switch case

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");
    float x1, x2, media;
    int resposta;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &x1);
    printf("Digite o segundo valor: ");
    scanf("%f", &x2);
    printf("\tEscolha a operação\n[1] Soma\n[2] Multiplicação\n[3] Media\n[4] Sair do simulador");
    printf("Digite sua escolha: ");
    scanf("%d", &resposta);
    switch (resposta)
    {
    case 1:
        cout<<"A soma de "<<x1<<" + "<<x2<<" = "<<x1+x2;
        break;
    
    case 2:
        cout<<"A multiplicação de "<<x1<<" x "<<x2<<" = "<<x1*x2;
        break;
    case 3:
        cout<<"A media de "<<x1<<" e "<<x2<<" é "<<(x1+x2)/2;
        break;
    case 4:
        cout<<"Simulador Finalizado.";
        break;
    default:
        cout<<"Valor invalido, simulador interrompido.";
    }

    return 0;
}
