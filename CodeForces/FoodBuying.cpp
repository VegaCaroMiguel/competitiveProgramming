#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        int spend = 0;
        while(x >0){
            if(x >= 10){
                int z = x/10;
                x -= 10*z;
                x += z;
                spend += 10*z;
            }
            else{
                spend += x;
                x =0;
            }
        }
        cout<<spend<<endl;
    }
    return 0;
}
