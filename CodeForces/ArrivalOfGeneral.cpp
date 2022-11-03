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
    vector<int> sorted = vect;
    sort(sorted.begin(), sorted.end());
    int minv = sorted[0];
    int maxv = sorted[sorted.size()-1];

    int mini;
    int maxi;
    //Leftmost max;
    for(int i =0; i < vect.size(); ++i){
        if(vect[i] == maxv){
            maxi = i;
            break;
        }
    }
    //Rightmost min
    for(int i =vect.size()-1; i>=0; --i){
        if(vect[i] == minv){
            mini =i;
            break;
        }
    }

    if(maxi > mini){
        cout<<maxi + vect.size()-1 -mini -1;
    }
    else{
        cout<<maxi + vect.size()-1 -mini;
    }
    return 0;
}
