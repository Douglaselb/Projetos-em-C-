#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    float port, mat, media;
    cout<<"Informe o valor da nota em portugues: ";
    cin>>port;
    cout<<"Informe o valor da nota em matematica: ";
    cin>>mat;
    media = (port + mat)/2;
    if (media >= 7)
        cout<<"Aluno aprovado!!!";
    else
        cout<<"Aluno reprovado.";
    return 0;
}
