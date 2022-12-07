#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        int a = 2020;
        int b = 2021;

        bool cond = false;
        for(int i =0; i <= max(x/a, x/b) && cond == false; ++i){
            for(int j =0; j <= max(x/a, x/b) && cond == false; ++j ){
                if( (a*i + b*j) == x ){
                    cout<<"YES"<<endl;
                    cond = true;
                }
            }
        }
        if(cond ==false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
