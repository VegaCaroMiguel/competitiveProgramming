#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin>>n;

    string aux;
    int x = 0;
    for(int i =0; i < n ; ++i){
        cin>>aux;
        if(aux == "X++"){
            ++x;
        }
        else if(aux == "++X"){
            ++x;
        }
        else if(aux == "X--"){
            --x;
        }
        else if(aux == "--X"){
            --x;
        }
    }
    cout<<x<<endl;
    return 0;
}
