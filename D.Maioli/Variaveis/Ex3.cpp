#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int num = 10;
    const float pi = 3.14;          //Usando o const não tem como alterar o valor usando o cin
    cout<<"Primeiro valor de num "<<num<<endl;
    cout<<"Variaveis que nao sao const podem ser alteradas"<<endl;
    cout<<"informe o novo valor de num: ";
    cin>>num;
    cout<<"A variavel num agora esta com o valor: "<<num<<endl;
    cout<<"Um exemplo de variavel const seria o valor de PI que podemos usar a constate "<<pi;
    return 0;
}
