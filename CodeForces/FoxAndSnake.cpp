#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    string a;
    for(int i =0; i < m-1; ++i){
        a+= ".";
    }
    a+= "#";
    string b;
    b+= "#";
    for(int i =0; i < m-1; ++i){
        b+= ".";
    }
    string c;
    for(int i =0; i< m; ++i){
        c += "#";
    }

    bool cond = true;
    for(int i =0; i< n; ++i){
        if(i == 0 || i%2==0){
            cout<<c<<endl;
        }
        else{
            if(cond){
                cout<<a<<endl;
                cond = !cond;
            }
            else{
                cout<<b<<endl;
                cond = !cond;
            }
        }
    }
    return 0;
}
