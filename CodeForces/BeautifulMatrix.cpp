#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int M[5][5];
    int x,y;
    for(int i =0; i < 5; ++i){
        for(int j= 0; j < 5; ++j){
            cin>>M[i][j];
            int a = M[i][j];
            if(a == 1){
                x =abs(2-i);
                y =abs(2-j);
                cout<<x+y<<endl;
            }
        }
    }
    return 0;
}
