#include<iostream>
using namespace std;

bool isLeapYear(int year) {

    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main() {

    int year = 2024;

    cout << isLeapYear(year) << endl;

    return 0;
}