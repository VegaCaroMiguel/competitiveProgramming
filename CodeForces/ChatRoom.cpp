#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;

    vector<char> vecta = {'h', 'e', 'l', 'l', 'o'};
    vector<bool> vectb = {false,false,false,false,false};

    int t = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == vecta[t]){
            vectb[t] = true;
            ++t;
        }
    }

    bool cond = true;
    for(int i = 0; i < vectb.size(); ++i){
        if(vectb[i] == false){
            cond = false;
            break;
        }
    }
    if(cond == true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
