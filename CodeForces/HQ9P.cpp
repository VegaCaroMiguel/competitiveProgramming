#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<char> vect = { 'H', 'Q', '9'};

    bool a = false;
    for(int i =0; i < s.size(); ++i){
        for(int j =0; j < vect.size(); ++j){
            if(s[i] == vect[j]){
                a = true;
                break;
            }
        }
    }
    if(a){
        cout<<"YES";
    }

    else{
        cout<<"NO";
    }
    return 0;
}
