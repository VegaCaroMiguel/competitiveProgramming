#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    string g = "CHAT WITH HER!";
    string b = "IGNORE HIM!";
    cin>>s;

    sort(s.begin(), s.end());

    int counter;
    for(int i =0; i < s.size(); ++i){
        while(i < s.size()-1 && s[i] == s[i+1]){
            ++i;
        }
        ++counter;
    }

    if(counter%2==0){
        cout<<g;
    }
    else{
        cout<<b;
    }
    return 0;
}
