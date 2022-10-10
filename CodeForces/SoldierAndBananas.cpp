#include <iostream>
#include <vector>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int cost =0;
    for(int i =1; i <= c; ++i){
        cost += a*i;
    }
    if(cost <= b){
        cout<<0;
    }
    else{
        cout<<cost-b;
    }
    return 0;
}
