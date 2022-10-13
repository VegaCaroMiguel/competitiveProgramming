#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    string b;
    cin>>a>>b;

    int countA = 0;
    int countB = 0;

    for(int i =0; i < b.size(); ++i){
        if(b[i] == 'A'){
            ++countA;
        }
        else{
            ++countB;
        }
    }
    if(countA > countB){
        cout<<"Anton";
    }
    else if(countA < countB){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}
