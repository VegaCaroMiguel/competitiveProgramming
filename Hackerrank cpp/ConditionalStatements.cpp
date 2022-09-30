#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<string> b = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(a>=1 && a<=9){
        cout<<b[a];
    }
    else if(a >9){
        cout<<b[0];
    }
    return 0;
}
