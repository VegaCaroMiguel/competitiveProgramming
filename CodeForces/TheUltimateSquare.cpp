#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n == 1 || n == 2){
            cout<<1<<endl;
        }
        else if( n%2 == 0){
            cout<<n/2<<endl;
        }
        else{
            int x = n/2 + 1;
            cout<<x<<endl;
        }
    }
    return 0;
}
