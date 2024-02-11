#include<iostream>
using namespace std;

int reverseNumber(int n) {

    int reverseNum = 0;

    while(n > 0) {

        int digit = n % 10;

        reverseNum = reverseNum * 10 + digit;

        n /= 10;

    }

    return reverseNum;

}
int main() {

    int n;
    cout << "Enter Number";
    cin >> n;

    int reversedNumber = reverseNumber(n);

    cout << "Given Number is Reversed " << reversedNumber << " ";


    return 0;

}