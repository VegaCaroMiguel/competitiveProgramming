#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    cin >> a;

    int c,d;
    int counter =0;
    while(a--){
        cin>>c>>d;
        int sum = d-c;
        if(sum >=2){
            ++counter;
        }
    }
    cout<<counter;
    return 0;
}
