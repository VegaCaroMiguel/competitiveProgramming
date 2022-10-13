#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;

    int max = 0;

    int pass =0;
    int a,b;
    while(t--){
        cin>>a>>b;
        pass = pass -a;
        pass = pass +b;
        if(pass > max){
            max = pass;
        }
    }
    cout<<max;
}
