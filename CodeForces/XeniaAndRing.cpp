#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;

    vector<long long> tasks;
    while(m--){
        int x;
        cin>>x;
        tasks.push_back(x);
    }

    long long counter =0;
    long long house = 1;
    for(int i =0; i < tasks.size(); ++i){
        long long task = tasks[i];

        if(house < task){
            counter += task - house;
            house = task;
        }
        else if( house > task){
            counter += (n - house) + task;
            house = task;
        }
    }
    cout<<counter<<endl;
    return 0;
}
