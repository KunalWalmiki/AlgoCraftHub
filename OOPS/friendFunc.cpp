#include<iostream>
using namespace std;


class Person {

    private:
    int age;

    public : 
    Person(int age) {

        this->age = age;

    }

    friend void display(Person &obj);

};

void display(Person &obj) {

    cout << obj.age << endl;

}
int main(){

    Person P(23);
    display(P);

    return 0;
}