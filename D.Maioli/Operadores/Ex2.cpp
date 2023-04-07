#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int num;
    cout<<"\tAnalisador de números"<<endl<<"Informe um valor inteiro: ";
    cin>>num;
    if (num % 2 == 0)
        cout<<"O número informado é par";
    else
        cout<<"O número informado é impar";
    return 0;
}
