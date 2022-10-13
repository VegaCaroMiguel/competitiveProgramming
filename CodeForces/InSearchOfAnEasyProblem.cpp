#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;

    vector<int> vect;
    bool z = false;
    for(int i =0; i < a; ++i){
        int x;
        cin>>x;
        vect.push_back(x);
    }

    for(int i =0; i < vect.size(); ++i){
        if(vect[i] == 1){
            z = true;
        }
    }
    if(z){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}
