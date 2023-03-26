#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a;
    vector<int> vect;
    while(a--){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    cin>>b>>c>>d;
    vect.erase(vect.begin()+ (b-1));
    vect.erase(vect.begin() + (c-1), vect.begin()+ (d-1));
    cout<<vect.size()<<endl;
    for(int i =0; i < vect.size(); ++i){
        cout<<vect[i]<<" ";
    }
    return 0;

}


