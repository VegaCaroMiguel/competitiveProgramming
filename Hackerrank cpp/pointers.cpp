#include <iostream>
#include <cstdlib>
using namespace std;

void update(int a, int b){

int *c = &a;
int *d = &b;
*c = a+b;
*d = abs(*c-*d);

cout<<*c<<endl;
cout<<*d<<endl;

}

int main(){
    int a,b;
    cin>>a>>b;
    update(a,b);
    return 0;
}

