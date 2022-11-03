#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> vect;
    for(int i =0; i < m; ++i){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(), vect.end());

    int min = vect[n-1] - vect[0];
    for(int i =0; i<= m-n; ++i){
        if( (vect[i + n-1] - vect[i]) < min){
            min = vect[i + n-1] - vect[i];
        }
    }
    cout<<min<<endl;
    return 0;
}
