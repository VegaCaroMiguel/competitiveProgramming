#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0 ? a : gcd(b,a%b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        pair<int,int> pairs[1001];

        for(int i =1; i <= 1000; ++i){
            pair<int,int> p = make_pair(i,-1);
            pairs[i] = p;
        }

        for(int i =1; i <= n; ++i){
            int x;
            cin>>x;
            pairs[x].second = i;
        }

        vector<int> sums;
        for(int i =1; i <= 1000; ++i ){
            for(int j = 1; j <= 1000; ++j ){
                if( gcd(i,j) == 1 && pairs[i].second != -1 && pairs[j].second != -1){
                    int sum = pairs[i].second + pairs[j].second;
                    sums.push_back(sum);
                }
            }
        }
        if(sums.size() == 0){
            cout<<"-1"<<endl;
        }
        else{
            sort(sums.begin(), sums.end());
            cout<<sums.back()<<endl;
        }
    }
    return 0;
}
