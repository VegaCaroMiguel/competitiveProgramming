#include <iostream>
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

    vector<int> seq;

    int counter = 1;
    for(int i =0; i < vect.size()-1; ++i){
        if(vect[i] <= vect[i+1]){
            ++counter;
        }
        else{
            seq.push_back(counter);
            counter = 1;
        }
    }
    seq.push_back(counter);

    int max = 0;
    for(int i =0; i < seq.size(); ++i){
        if(seq[i] >= max){
            max = seq[i];
        }
    }
    cout<<max;
    return 0;
}
