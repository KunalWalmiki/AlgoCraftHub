#include<iostream>
using namespace std;


class Animal {

    protected : 
    int height;
    int weight;

    void speak() {

        cout << "speaking"<< endl;
    }
};

class Dog : protected Animal{

};

int main() {

    Dog d;
    cout << d.height;
    d.speak();

    return 0;
}