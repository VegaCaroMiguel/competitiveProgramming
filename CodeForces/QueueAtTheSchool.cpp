#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    string x;
    cin>>a>>b>>x;
    while(b--){
        for(int i =0; i < x.size(); ++i){
            if(x[i] == 'B' && x[i+1] == 'G'){
                x[i] = 'G';
                x[i+1] = 'B';
                ++i;
            }
            else{
                continue;
            }
        }
    }
    cout<<x;
    return 0;
}
