#include<iostream>
using namespace std;

class Shape {

    public:
    virtual void draw() = 0;

};

class Circle : public Shape {

    public : 
    void draw() {
        cout << "Drawing" << endl;
    }
};
int main() {


    Circle C;
    C.draw();

    return 0;
}