#include<iostream>
#include<string>
using namespace std;

class Person {

    public : 
    int height;
    int age;
    string name;

};

class Employee : public virtual Person {

    public :
    int emp_id;

};

class Student : public virtual Person {

    public : 
    int roll_no;

};

class Intern : public Employee , public Student {

    public :
    int duration;

};

int main() {

    Intern I;
    I.age = 23;
    I.height = 5.7;
    I.name = "kunal";
    I.roll_no = 43;
    I.duration = 6;

    cout << " Height : " << I.Person::height<< endl;
    cout << " Age : " << I.age<< endl;
    cout << " Name : " << I.name<< endl;
    cout << " Roll No : " << I.roll_no<< endl;
    cout << " duration : " << I.duration<< endl;
    
    return 0; 
}