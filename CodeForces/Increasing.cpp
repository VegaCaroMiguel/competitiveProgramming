#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        vector<int> vect;
        int x;
        for(int i =0; i < b; ++i){
            cin>>x;
            vect.push_back(x);
        }
        sort(vect.begin(), vect.end());

        bool cond = true;
        for(int i =0; i < vect.size()-1; ++i){
            if(vect[i] == vect[i+1]){
                cond = false;
            }
        }
        if(cond){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0; N
}
