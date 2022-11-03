#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a==1){
        cout<<"I hate it";
    }
    else{
        for(int i =1; i <=a; ++i ){
            if(i==1){
                cout<<"I hate that ";
            }
            else if(i%2==0 && i!=a){
                cout<<"I love that ";
            }
            else if(i%2!=0 && i!=a){
                cout<<"I hate that ";
            }
            else if(i%2==0 && i==a){
                cout<<"I love ";
            }
            else if(i%2!=0 && i==a){
                cout<<"I hate ";
            }
        }
        cout<<"it";
    }
    return 0;
}
