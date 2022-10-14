#include <iostream>
#include <string>
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
    for(int i =0; i < vect.size(); ++i){
        for(int j =0; j < vect.size(); ++j){
            if(i+1 == vect[j]){
                cout<<j+1<<" ";
            }
        }
    }
    return 0;
}
