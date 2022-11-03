#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    cin>>x;

    int counter = 0;
    for(int i =0; i < x.size(); ++i){
        if(x[i] != tolower(x[i])){
            ++counter;
        }
    }

    if(counter == x.size()){
        for(int i =0; i < x.size(); ++i){
            cout<<(char)tolower(x[i]);
        }
    }
    else if (x[0] == tolower(x[0]) && counter == x.size()-1){
        cout<<(char)toupper(x[0]);
        for(int i =1; i < x.size(); ++i){
            cout<<(char)tolower(x[i]);
        }
    }
    else{
        cout<<x;
    }
    return 0;
}
