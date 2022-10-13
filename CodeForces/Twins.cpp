#include <iostream>
#include <algorithm>
#include <vector>
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
    sort(vect.begin(), vect.end());


    int sum = 0;
    for(int i =0; i < vect.size(); ++i){
        sum += vect[i];
    }

    bool c = false;
    int ss = 0;
    int coins = 0;
    for(int i =vect.size()-1; c == false; --i){
        if((sum - ss) >= ss){
            ss += vect[i];
            ++coins;
        }
        else{
            cout<<coins;
            c = true;
        }
    }
    return 0;
}
