#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;

    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    char aux = a[0];
    a[0] = b[0];
    b[0] = aux;
    cout<<a<<" "<<b<<endl;
    return 0;
}


