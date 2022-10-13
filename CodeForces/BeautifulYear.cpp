#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;

    bool cond = false;
    while(cond == false){
        ++a;
        string s = to_string(a);
        int counter = 0;

        sort(s.begin(), s.end());
        for(int i =0; i < s.size(); ++i){
            while(i < s.size()-1 && s[i] == s[i+1]){
                ++i;
            }
            ++counter;
            if(counter == s.size()){
                cond = true;
                cout<<a<<endl;
                break;
            }
        }
    }
    return 0;
}
