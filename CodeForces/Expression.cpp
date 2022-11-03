#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> vect;
    for(int i =0; i < 3; ++i){
        int x;
        cin>>x;
        vect.push_back(x);
    }

    int a = vect[0]*vect[1]*vect[2];
    int b = vect[0] + vect[1] + vect[2];
    int c = (vect[0] + vect[1])*vect[2];
    int d = vect[0]*(vect[1] + vect[2]);
    int e = vect[0] + (vect[1]*vect[2]);
    int f = (vect[0]*vect[1]) + vect[2];

    int s = max({a,b,c,d,e,f});
    cout<<s;
    return 0;
}
