#include<iostream>
#include<math.h>
using namespace std;

int reverseAnInteger(int n) {

    int ans = 0;

    while(n != 0) {

        int digit = n % 10;

        ans = ans * 10 + digit;

        n /= 10;

    }

    return ans;

}
int main() {

    int n;
    cout << "Enter Number to get it reversed" << endl;
    cin>>n;

    int reversedNumber = reverseAnInteger(n);

    cout << "Number : " << n << " Reversed " << reversedNumber << endl;

    return 0;
}