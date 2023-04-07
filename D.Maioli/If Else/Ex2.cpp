#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]){
    float peso, altura, imc;
    cout<<"\tCalculadora IMC"<<endl<<"Informe o seu peso: ";
    cin>>peso;
    cout<<"Informe a sua altura: ";
    cin>>altura;
    imc = peso / (pow(altura,2));
    if (imc<18.5)
        cout<<"Voce esta abaixo do peso ideal.";
    else if (imc > 18.5 && imc<25)
        cout<<"Seu peso esta normal.";
    else if (imc > 25 && imc<30)
        cout<<"Voce esta com excesso de peso";
    else if (imc > 30 && imc<35)
        cout<<"Voce esta obeso.";
    else
        cout<<"Voce esta com obesidade morbida.";

    return 0;
}
