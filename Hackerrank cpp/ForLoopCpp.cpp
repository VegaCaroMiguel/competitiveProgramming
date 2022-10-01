#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int a,b;
    cin >>a>>b;

    vector<string> vect = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i =a; i <=b; ++i){
        if(i>=1 && i<=9){
            cout<<vect[i-1]<<endl;
        }
        else if(i > 9 && i%2==0){
            cout<<"even"<<endl;
        }
        else if (i > 9 && i%2!=0){
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
