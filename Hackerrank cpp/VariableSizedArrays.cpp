#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> arr[a];
    for(int i =0; i < a; ++i){
        int n;
        cin>>n;

        int aux;
        for(int j = 0; j < n; ++j){
            cin>>aux;
            arr[i].push_back(aux);
        }
    }
    for(int i=0; i< b; ++i){
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
}
