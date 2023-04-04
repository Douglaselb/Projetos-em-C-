#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]){

    int x1 = 2, x2 = 3, x3 = 4, x4 = 7;
    float y1 = 3.3, y2 = 4.2, y3 = 7.5;
    
    cout<<x1<<" + "<<x2<<" = "<<x1+x2<<endl;
    cout<<y1<<" + "<<y2<<" = "<<y1+y2<<endl;
    cout<<x3<<" / "<<x1<<" = "<<x3/x1;
    cout<<x3<<" % "<<x1<<" = "<<x3%x1<<endl;
    cout<<y3<<" x "<<y1<<" = "<<y3 * y1;

    return 0;
}
