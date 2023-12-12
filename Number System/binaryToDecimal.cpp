#include<iostream>
#include<math.h>
using namespace std;
int convertBinaryToDecimal(int n) {

    int decimalNo = 0;
    int i = 0;

    while(n > 0) {

        int digit = n % 10;

        decimalNo = digit * pow(2 , i++) + decimalNo;

        n = n/10;

    }

    return decimalNo;

} 
int main() {

    cout << "Enter Binary Number to convert it to decimal" << endl;
    int n;
    cin>>n;

    int decimalNo = convertBinaryToDecimal(n);

    cout << "Decimal Representation of : " << n << " is " << decimalNo;

    return 0;
}