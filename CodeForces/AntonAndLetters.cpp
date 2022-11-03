#include <bits/stdc++.h>
using namespace std;
int main(){

    string a;
    getline(cin,a);

    string b;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != '{' && a[i] != '}' && a[i] != ',' && a[i] != ' '){
            b+= a[i];
        }
    }

    sort(b.begin(), b.end());
    int counter =0;
    for(int i =0; i < b.size(); ++i){
        while(i < b.size()-1 && b[i] == b[i+1] ){
            ++i;
        }
        ++counter;
    }
    cout<<counter;
    return 0;
}
