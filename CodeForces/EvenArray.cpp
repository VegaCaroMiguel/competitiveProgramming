#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vect;

        int moves = 0;

        int Iodds = 0;
        int Ievens = 0;

        int Vodds = 0;
        int Vevens = 0;

        int wrongs = 0;

        for(int i =0; i < n; ++i){
            int x;
            cin>>x;
            if(i%2==0){
                ++Ievens;
            }
            else{
                ++Iodds;
            }

            if(x%2==0){
                ++Vevens;
            }
            else{
                ++Vodds;
            }

            if(x%2 != i%2){
                ++wrongs;
            }
        }
        if(wrongs == 0){
            moves = 0;
        }
        else{
            if(Iodds == Vodds && Ievens == Vevens){
                moves = wrongs/2;
            }
            else{
                moves = -1;
            }
        }
        cout<<moves<<endl;
    }
    return 0;
}
