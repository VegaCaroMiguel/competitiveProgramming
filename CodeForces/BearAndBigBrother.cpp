#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    bool c = false;
    int counter=0;
    while(c == false){
        ++counter;
        a = 3*a;
        b = 2*b;
        if(a > b){
            c = true;
        }
    }
    cout<<counter;
}
