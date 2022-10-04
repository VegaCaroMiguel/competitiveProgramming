#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,p;
    cin>>n;
    cin>>p;
    vector<int> vect;
    int aux;
    for(int i =0; i < n; ++i){
        cin>>aux;
        vect.push_back(aux);
    }
    int cohourt = vect[p-1];
    int counter =0;
    for(int i =0; i < n; ++i){
        if(vect[i] >= cohourt && vect[i]>0){
            ++counter;
        }
    }
    cout<<counter<<endl;
}
