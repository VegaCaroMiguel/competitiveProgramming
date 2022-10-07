#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s, ns;
    cin>>s;

    for(int i =0; i < s.size(); ++i){
        if(s[i] !='+'){
            ns+= s[i];
        }
    }

    sort(ns.begin(),ns.end());

    for(int i =0; i < ns.size(); ++i){
        if(i == ns.size()-1){
            cout<<ns[i];
        }
        else{
            cout<<ns[i]<<"+";
        }
    }
    return 0;
}
