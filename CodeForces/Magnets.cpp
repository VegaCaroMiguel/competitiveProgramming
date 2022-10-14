#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int a;
    cin>>a;

    if( a ==1){
        cout<<a;
    }
    else{
        vector<string> vect;
        int counter =1;
        while(a--){
            string s;
            cin>>s;
            vect.push_back(s);
        }

        for(int i =0;  i < vect.size()-1; ++i){
            if(vect[i][1] == vect[i+1][0]){
                ++counter;
            }
        }
        cout<<counter;
    }
    return 0;
}
