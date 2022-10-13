#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1;
    string ans = "NO";
    for(int i =0; i < s.size(); ++i){
        if(s[i] == s[i+1]){
            ++count;
            if(count == 7){
                ans = "YES";
                break;
            }
        }
        else{
            count = 1;
        }
    }
    cout<<ans;
    return 0;
}
