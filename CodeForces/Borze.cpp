#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;

    for(int i =0; i < a.size(); ++i){
        if(a[i] =='.'){
            cout<<0;
        }
        else if(a[i] == '-' && a[i+1] == '.'){
            cout<<1;
            ++i;
        }
        else if(a[i] == '-' && a[i+1] == '-'){
            cout<<2;
            ++i;
        }
    }
    return 0;
}
