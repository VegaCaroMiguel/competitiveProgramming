#include <iostream>
#include <string>
using namespace std;

struct stud{
    int age;
    string name;
    string sname;
    int grade;
};

int main(){
    struct stud s;
    cin>>s.age>>s.name>>s.sname>>s.grade;
    cout<<s.age<<" "<<s.name<<" "<<s.sname<<" "<<s.grade<<endl;
    return 0;
}
