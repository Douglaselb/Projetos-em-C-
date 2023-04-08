#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int var;
    cout<<"Informe um valor: ";
    cin>>var;
    var % 2 == 0 ? cout<<"O numero e par" : cout<<"O numero e impar";
    return 0;
}
