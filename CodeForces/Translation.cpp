#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;

    bool cond = true;

    if(a.size() != b.size()){
        cond = false;
    }
    else{
        for(int i =0; i < a.size(); ++i){
            if(a[i] == b[a.size()-i-1]){
                continue;
            }
            else{
                cond = false;
            }
        }
    }
    if(cond){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
