#include<iostream>
#include<math.h>
using namespace std;
int binaryToDecimal(int n) {

    int decimal = 0;
    int i = 0;

    while(n > 0) {

        int digit = n % 10;

        decimal = (digit * pow(2, i++)) + decimal;

        n = n / 10;
    }

    return decimal;
}
int main() {

    cout << binaryToDecimal(1010);

    return 0;
}