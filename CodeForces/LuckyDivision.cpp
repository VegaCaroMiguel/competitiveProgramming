#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool nl = false;

    for(int i =4; i <= a; ++i){
        int counter = 0;
        string s = to_string(i);
        for(int i =0; i < s.size(); ++i){
            if(s[i] == '4' || s[i] == '7'){
                ++counter;
            }
        }
        if(counter == s.size() && a%i == 0){
            nl = true;
        }
    }
    if(nl){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
