#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vect;
    while(n--){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    pair<int,int> a = make_pair(0,0);
    pair<int,int> b = make_pair(0,0);
    for(int i =0; i < vect.size(); ++i){
        if(vect[i]%2==0){
            ++a.first;
            a.second = i +1;
        }
        else{
            ++b.first;
            b.second = i +1;
        }
    }
    if(a.first == 1){
        cout<<a.second<<endl;
    }
    else if(b.first == 1){
        cout<<b.second<<endl;
    }
    return 0;
}
