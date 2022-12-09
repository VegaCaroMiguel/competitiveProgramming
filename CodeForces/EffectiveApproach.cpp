#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<pair<int,int>> &pairs, int l, int r, int x){
    if(r >= l){
        int mid = l + (r-l)/2;

        if(pairs[mid].first == x){
            return pairs[mid].second;
        }
        else if(pairs[mid].first > x){
            return binarySearch(pairs, l, mid-1, x);
        }
        else{
            return binarySearch(pairs, mid+1, r, x);
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    vector<pair<int,int>> pairs;
    for(int i =1; i <= n; ++i){
        int x;
        cin>>x;
        pair<int,int> p = make_pair(x, i);
        pairs.push_back(p);
    }

    sort(pairs.begin(), pairs.end());

    int m;
    cin>>m;
    vector<int> queries;
    while(m--){
        int x;
        cin>>x;
        queries.push_back(x);
    }

    long long x =0;
    long long y =0;
    for(int i =0; i < queries.size(); ++i){
        long long a =binarySearch(pairs, 0, pairs.size()-1, queries[i]);
        long long b = pairs.size() -a +1;
        x+= a;
        y+= b;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
