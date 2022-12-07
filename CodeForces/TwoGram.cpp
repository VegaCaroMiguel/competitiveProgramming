#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<pair<int, string>> pairs;

    for(int i =0; i < s.size()-1; ++i){
        string t;
        t += s[i];
        t += s[i+1];

        pair<int,string> p = make_pair(1, t);

        if(pairs.size() == 0){
            pairs.push_back(p);
        }
        else{
            for(auto& va: pairs){
                if(va.second == p.second){
                    ++va.first;
                    continue;
                }
            }
            pairs.push_back(p);
        }
    }
    sort(pairs.begin(), pairs.end());
    cout<<pairs.back().second<<endl;
    return 0;
}
