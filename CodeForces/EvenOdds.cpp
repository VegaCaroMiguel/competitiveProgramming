#include <iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;

    if(a%2!=0){
        if(b<=((a/2)+1)){
            cout<<(2*b)-1;
        }
        else{
            cout<<(2*(b-(((a/2)+1))));
        }
    }
    else{
        if(b<=a/2){
            cout<<(2*b)-1;
        }
        else{
            cout<<2*(b-(a/2));
        }
    }
    return 0;
}
