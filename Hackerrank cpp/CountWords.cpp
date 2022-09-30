#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string s){
    int counter;
    stringstream ss(s);

    string aux;

    while(ss>>aux){
        ++counter;
    }
    return counter;
}

int main(){
    string s = "Tres tristes tigres tragaban trigo en un trigal";
    cout<<"El numero de palabras es : "<<countWords(s)<<endl;
    return 0;
}
