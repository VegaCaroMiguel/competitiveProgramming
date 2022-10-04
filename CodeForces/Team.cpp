#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum =0;
    for(int i =0; i < n ; ++i){
        int arr[3];
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        int count=0;
        for(int j =0; j < 3; ++j){
            if(arr[j]==1){
                ++count;
            }
        }
        if(count >=2){
            ++sum;
        }
    }
    cout<<sum<<endl;
    return 0;
}
