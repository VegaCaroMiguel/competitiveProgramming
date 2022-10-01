#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        int get_age(){
            return age;
        }
        void set_age(int pAge){
            age = pAge;
        }
        string get_first_name(){
            return first_name;
        }
        void set_first_name(string pFname){
            first_name = pFname;
        }
        string get_last_name(){
            return last_name;
        }
        void set_last_name(string pLname){
            last_name = pLname;
        }
        int get_standard(){
            return standard;
        }
        void set_standard(int pStandard){
            standard = pStandard;
        }
        string to_string(){
            string s = std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard);
            return s;
        }
};

int main(){
    Student s;
    int a;
    string b;
    string c;
    int d;
    cin>>a>>b>>c>>d;

    s.set_age(a);
    s.set_first_name(b);
    s.set_last_name(c);
    s.set_standard(d);

    cout<<s.get_age()<<endl;
    cout<<s.get_last_name()<<", "<<s.get_first_name()<<endl;
    cout<<s.get_standard()<<endl<<endl;
    cout<<s.to_string()<<endl;
    return 0;
}
