#include<iostream>
using namespace std;


class Vehical {

    public : 
    string modelName;
    int modelNumber;

};

class Toyota : public Vehical{

    public :
    int chasiNo;
    int topSpeed;

};

class BMW : public Vehical {

    public: 
    int chasiNo;
    int topSpeed;

};

int main() {

    BMW b;
    b.modelName = "BMW 520d";
    b.modelNumber = 123;
    b.chasiNo = 456;
    b.topSpeed = 350;

    cout << "model Name : "<< b.modelName << endl;
    cout << "model Number : "<< b.modelNumber << endl;
    cout << "Chasi Number : "<<  b.chasiNo << endl;
    cout << "Top Speed : "<< b.topSpeed << endl;

    cout << endl;
    Toyota t;
    t.modelName = "Toyota Innova";
    t.modelNumber = 987;
    t.chasiNo = 9087;
    t.topSpeed = 200;

    cout << "model Name : "<< t.modelName << endl;
    cout << "model Number : "<< t.modelNumber << endl;
    cout << "Chasi Number : "<<  t.chasiNo << endl;
    cout << "Top Speed : "<< t.topSpeed << endl;


    return 0;

}

