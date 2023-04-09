#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]){
    cout<<"\tVamos analisar as ordens de precedencia dos operadores"<<endl;
    cout<<"Ordem de operacao\n[1] Parenteser ()\n[2] Multiplicacao(*), divisao(/), modulo (%)\n[3] soma (+), subtracao (-)"<<endl;
    cout<<endl<<"1+2*3/5 = "<<1+2*3/5<<endl;
    cout<<"(1+2)*3/5 = "<<(1+2)*3/5<<endl;
    cout<<endl<<"1+2*3/2^3 = "<<1+2*3/pow(2,3)<<endl;
    cout<<"(1+2)*3/2^3 = "<<(1+2)*3/pow(2,3)<<endl;
    return 0;
}
