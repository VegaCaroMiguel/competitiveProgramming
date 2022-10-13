#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string s;
    string ns;
    cin>>s;
    int u = 0;
    int l = 0;
    for(int i =0; i < s.size(); ++i){
        char a = tolower(s[i]);
        if(a == s[i]){
            //Era lowercase
            ++l;
        }
        else{
            //Era uppercase
            ++u;
        }
    }
    if(u == l){
        for(int i =0 ; i < s.size(); ++i){
            cout<<(char) tolower(s[i]);
        }
    }
    else if(u > l){
        for(int i =0; i < s.size(); ++i){
            cout<< (char) toupper(s[i]);
        }
    }
    else{
        for(int i =0; i < s.size(); ++i){
            cout<< (char) tolower(s[i]);
        }
    }
