#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> contests;
    while(n--){
        int a;
        cin>>a;
        contests.push_back(a);
    }
    int counter = 0;
    for(int i =1; i < contests.size(); ++i){
        int low =0;
        int high = 0;
        for(int j= i-1; j >=0 ; --j){
            if(contests[i] > contests[j]){
                ++high;
            }
            else if(contests[i] < contests[j]){
                ++low;
            }
        }
        if(low == i){
            ++counter;
        }
        else if(high == i){
            ++counter;
        }
    }
    cout<<counter<<endl;
    return 0;
}
