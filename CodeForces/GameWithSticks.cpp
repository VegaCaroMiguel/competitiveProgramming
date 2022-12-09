#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    string turn = "Akshat";
    bool cond = false;
    while(n*m > 0){
        --n;
        --m;
        if(turn == "Akshat"){
            turn = "Malvika";
        }
        else{
            turn = "Akshat";
        }
    }
    if(turn == "Akshat"){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}
