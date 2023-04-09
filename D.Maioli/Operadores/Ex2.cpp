#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int num;
    cout<<"\tAnalisador de numeros"<<endl<<"Informe um valor inteiro: ";
    cin>>num;
    (num % 2 == 0) ? cout<<"O numero informado e par" : cout<<"O numero e impar";
    /*
    if (num % 2 == 0)
        cout<<"O número informado é par";
    else
        cout<<"O número informado é impar";
    */
    return 0;
}
