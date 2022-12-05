#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;

    vector<int> bills = {1, 5, 10, 20, 100};

    int bill = 0;

    for(int i = 4; i >= 0; --i){
        if(a/bills[i] >=1){
            bill += a/bills[i];
            a = a - (a/bills[i])*bills[i];
        }
    }
    cout<<bill<<endl;
    return 0;

}

