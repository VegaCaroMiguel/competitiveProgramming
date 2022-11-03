#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

    vector<int> vect;
    int a = 4;
    while(a--){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    sort(vect.begin(), vect.end());

    int counter = 0;
    for(int i =0; i < 3; ++i){
        if(vect[i] == vect[i+1]){
            ++counter;
        }
    }
    cout<<counter<<endl;
    return 0;
}
