#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    vector<int> vect;
    while(a--){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(), vect.end());
    for(int i =0; i < vect.size(); ++i){
        cout<<vect[i]<<" ";
    }
    return 0;
}
