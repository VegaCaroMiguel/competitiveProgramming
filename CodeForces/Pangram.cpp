#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    string s;
    cin>>s;

    vector<char> vect = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<bool> Bvect;
    for(int i =0; i < vect.size(); ++i){
        Bvect.push_back(false);
    }

    for(int i =0; i < s.size(); ++i){
        for(int j =0; j < vect.size(); ++j){
            char low = tolower(s[i]);
            if( low == vect[j] ){
                Bvect[j] = true;
            }
        }
    }

    bool cond = true;
    for(int i =0; i < Bvect.size(); ++i){
        if(Bvect[i] == false){
            cond = false;
            break;
        }
    }
    if(cond){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

