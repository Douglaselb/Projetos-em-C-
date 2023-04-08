#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    float port, mat, media, freq;
    cout<<"Informe a nota tirada em portugues: ";
    cin>>port;
    cout<<"Informe a nota tirada em matematica: ";
    cin>>mat;
    media = (port + mat) / 2;
    cout<<"Informe a requencia do aluno: ";
    cin>>freq;
    if (media >= 7 && freq >= 6)
        cout<<"Aluno aprovado!!!";
    else if (media >= 7 && freq < 6)
        cout<<"Aluno reprovado por ter baixa frequencia nas aulas.";
    else
        cout<<"Aluno reprovado.";
    return 0;
}
