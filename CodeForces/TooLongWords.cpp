#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i =0; i < n; ++i){
        string aux;
        cin>>aux;
        if(aux.size()<=10){
            cout<<aux<<endl;
        }
        else{
            int x = aux.size()-2;
            char a = aux[0];
            char b = aux[x+1];
            string ans = a + to_string(x) + b;
            cout<<ans<<endl;
        }
    }
    return 0;
}
