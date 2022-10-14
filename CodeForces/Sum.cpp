#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    while(a--){
        int c,d,e;
        cin>>c>>d>>e;
        int arr[3] = {c,d,e};

        bool cond = false;
        if(arr[0] == (arr[1] + arr[2]) ){
            cond = true;
        }
        else if(arr[1] == (arr[0] + arr[2])){
            cond = true;
        }
        else if(arr[2] == (arr[0] + arr[1]) ){
            cond = true;
        }
        else{
            cond = false;
        }
        if(cond){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
