#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long a;
    cin>>a;
    if(a%2==0){
        long sum = a*(a+1)/2;
        cout<<sum;
    }
    else{
        long sum = a*(a+1)/4;
        cout<<sum;
    }
    return 0;
}
