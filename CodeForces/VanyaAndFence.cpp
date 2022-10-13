#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    vector<int> vect;

    for(int i =0; i < a; ++i){
        int x;
        cin>>x;
        vect.push_back(x);
    }
    int sum =0;
    for(int i =0; i < vect.size(); ++i){
        if(vect[i] <= b){
            ++sum;
        }
        else{
            int diff = vect[i] - b;
            sum += 2;
        }
    }
    cout<<sum<<endl;
    return 0;
}
