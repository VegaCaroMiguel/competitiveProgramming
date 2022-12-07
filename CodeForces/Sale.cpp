#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> negs;
    while(n--){
        int x;
        cin>>x;
        if(x < 0){
            negs.push_back(x);
        }
    }
    sort(negs.begin(), negs.end());

    int sum =0;
    int counter =0;
    for(int i =0; i < negs.size() && counter < m; ++i){
        sum += negs[i];
        ++counter;
    }
    cout<<sum*-1<<endl;
    return 0;
}
