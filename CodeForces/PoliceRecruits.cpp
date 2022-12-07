#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int police = 0;
    int counter =0;
    while(n--){
        int x;
        cin>>x;

        if(x < 0 && police == 0){
            ++counter;
        }
        else if( x < 0 && police != 0){
            --police;
            continue;
        }
        else if( x >0){
            police += x;
        }
    }
    cout<<counter<<endl;
    return 0;
}
