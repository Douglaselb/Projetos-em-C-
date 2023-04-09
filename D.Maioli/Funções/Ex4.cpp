#include <iostream>
using namespace std;
int tabuada_multiplicacao(int x, int y){
    int multiplica;
    multiplica = x * y;
    return multiplica;
}int main(int argc, char const *argv[]){
    int x, y = 1;
    cout<<"Informe a tabuada que deseja ver: ";
    cin>>x;
    while (y < 11){
        cout<<x<<" x "<<y<<" = "<<tabuada_multiplicacao(x,y)<<endl;
        y++;
    };


    return 0;
}
