#include <iostream>
#include <vector>
using namespace std ;
int main(){
    int n;
    cin>>n;

    int sum = 0;
    int aux;
    for(int i =0; i < n ; ++i){
        cin>>aux;
        sum+= aux;
    }
    cout<<sum;
    return 0;
}
