#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;

    bool arr[a+1] = {0};

    cin>>b;
    while(b--){
        int x;
        cin>>x;
        arr[x] = 1;
    }
    cin>>c;
    while(c--){
        int y;
        cin>>y;
        arr[y] = 1;
    }

    bool cond = true;
    for(int i =1; i <= a; ++i){
        if(arr[i] == 0){
            cond = false;
        }
    }
    cout<< (cond ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}
