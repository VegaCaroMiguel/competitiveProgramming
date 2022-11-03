#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    double d = a;
    double sum =0.0;
    while(a--){
        double x;
        cin>>x;
        sum += x;
    }
    sum = sum/100;
    cout<<fixed<<setprecision(12)<<(sum/d)*100;
    return 0;
}
