#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else if(a<b){
            cout<<b-a<<endl;
        }
        else{
            cout<<(a + (b-(a%b))) - a<<endl;
        }
    }
    return 0;
}
