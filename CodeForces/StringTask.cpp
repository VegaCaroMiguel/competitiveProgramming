#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string s;
    string ns;

    cin>>s;

    for(int i =0; i < s.size(); ++i){
        if(s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] !='u' && s[i] != 'Y' && s[i] != 'y'){
            ns = ns + "." + (char)tolower(s[i]);
        }
    }
    cout<<ns;
    return 0;
}
