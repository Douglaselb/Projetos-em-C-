// Declarando funções . . . primeiros passos

#include <iostream>
#include <cstdio>

using namespace std;

int somar(){            //tipo da função e o seu nome
    return 2 + 3;       //o que a função vai retornar
}

int main(int argc, char const *argv[])
{
    int resultado = 0;
    int x = 10, y = 11;
    resultado = somar();
    cout<<"O resultado de 3 + 2 = "<<somar();

    return 0;
}
