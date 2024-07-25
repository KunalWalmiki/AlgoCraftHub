#include<bits/stdc++.h>
using namespace std;

// static keyword in function
// void print() {

//     static int x = 0;
//     cout << x << endl; 
//     x++;

// }


class Person { 

    public :
     static int age;

    void show() {
        cout << this->age << endl;
    }


};

int Person::age = 0;

class Stud : public Person{

    public : 
    
    void showAge() {
        cout << age << endl;
    }
};

int main() {

    Person obj;
    obj.age = 22;
    obj.show();

    obj.age = 58;

    Stud obj1;
    obj1.showAge();
    obj.show();

    return 0;
}
