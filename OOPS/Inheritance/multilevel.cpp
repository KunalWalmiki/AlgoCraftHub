#include<iostream>
using namespace std;

class Animal {

    public :
    int age;
    int height;
    int weight;

};

class Dog : public Animal {

    public: 
    int legs; 
    
    void bark() {

        cout << "Barking" << endl;

    }


};


class Cat : public Dog {

    public :
    void mew() {
        cout << "mew " << endl;
    }
};

int main() {


    Cat C ;
    C.height = 2.1;
    cout << C.height<< endl;
    C.mew();


    Dog D;
    D.bark();
    
    return 0;

}