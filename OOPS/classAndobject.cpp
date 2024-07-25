#include<iostream>
#include<string>
using namespace std;

class Hero {

    private:
    int health;
    char level;
    int *shots;

    public:
    static int timeOut;

    // empty constructor
    Hero() {
        cout << "Contructor Called" << endl;
        shots = new int;
        *shots = 0;
    }
    // Parameterised Costructor
    // Hero(int health, char level) {

    //     this->health = health;
    //     this->level = level;

    // }
    Hero(Hero &temp) {

        this->health = temp.health;
        this->level = temp.level;
        this->shots = temp.shots;
    }

    static void getTimeOut () {

        cout << timeOut << endl;

    }

    static void setTimeOut (int time) {
        timeOut = time;
    }

    void setShots(int s) {
        shots = new int;
        *shots = s;
    }

    int getShot() {

        return *shots;

    }

    void setHealth(int health) {
        this->health = health;
    } 

    void setLevel(char level) {

        this-> level = level;

    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    ~Hero() {
        cout << "destructor Called " << endl;
        delete shots;
    }

};

int Hero::timeOut = 201;

int main() {

    Hero h;

    Hero::getTimeOut();
    Hero::setTimeOut(89);
    Hero::getTimeOut();

    // cout <<Hero::timeOut<< endl;

    // Hero::timeOut = 112;

    // cout << Hero::timeOut<< endl;

    // h.setShots(101);
    // h.setHealth(70);
    // h.setLevel('A');
    // cout << "shots : " <<h.getShot() << endl;
    // cout << "health : "<< h.getHealth() << endl;
    // cout << "Level : " << h.getLevel() << endl;
    // cout << endl;

    // Hero P(h);
    // cout << "shots : " <<P.getShot() << endl;
    // cout << "health : "<< P.getHealth() << endl;
    // cout << "Level : " << P.getLevel() << endl;

    // cout << endl;
    // h.setShots(201);

    // cout << "shots : " <<h.getShot() << endl;
    // cout << "health : "<< h.getHealth() << endl;
    // cout << "Level : " << h.getLevel() << endl;

    // cout << endl;
    //  cout << "shots : " <<P.getShot() << endl;
    // cout << "health : "<< P.getHealth() << endl;
    // cout << "Level : " << P.getLevel() << endl;

   //custom copy contructor 
   // it makes shallow copy
    // Hero P(h);

    // by default called copy constructor
    // P = h;
    // cout << P.getHealth() << endl;
    // cout << P.getLevel() << endl;


    // setter and getter for writting and reading values of private member
    // h.setHealth(70);
    // h.setLevel('A'); 
    // cout << h.getHealth() << endl;
    // cout << h.getLevel() << endl;

    // empty class have 1 size of memory
    // if it has one data of int then 4 size of memory
    // cout << sizeof(h) << endl;
    
    return 0;
}