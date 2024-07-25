#include<bits/stdc++.h>
#include<string>
using namespace std;

class Teacher {

    public :
    string subject;
    string name;
    int age;


};

class Student {

    public :
    int rollNo;
};

class TA : public Teacher, public Student {

    public :
    string rank;

};

int main() {

   TA t;
   t.age = 23;
   t.name = "Kunal";
   t.subject = "C++";
   t.rank = "A+";

   cout << t.age << endl; 
   cout << t.name << endl;
   cout << t.subject << endl;
   cout << t.rank << endl;

    return 0;
}