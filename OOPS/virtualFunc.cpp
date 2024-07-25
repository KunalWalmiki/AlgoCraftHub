#include<iostream>
using namespace std;


class Person {

    public :
    virtual void display() {
        cout << "Ready to displaying" << endl;
    }
};

class Student : public Person {

    public : 
    // void display() {
    //     cout << "Displaying " << endl;
    // }

};

int main() {

    Person P;
    P.display();

    // Student S;
    // S.display();

    return 0;
}