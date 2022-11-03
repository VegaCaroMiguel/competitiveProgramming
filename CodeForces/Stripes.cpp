#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char M[8][8];

        for(int i =0; i < 8; ++i){
            for(int j =0; j < 8; ++j){
                cin>>M[i][j];
            }
        }

        char last = 'R';
        bool found = false;
        for(int i =0; i < 8; ++i){
            int counter = 1;
            for(int j =1; j < 8 && found == false; ++j){
                if(M[i][0] == last && M[i][j] == M[i][0]){
                    ++counter;
                    if(counter == 8){
                        found = true;
                        cout<<last<<endl;
                    }
                }
            }
        }
        if(found == false){
            cout<<'B'<<endl;
        }
    }
    return 0;
}
