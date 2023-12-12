#include<iostream>
#include<math.h>
using namespace std;
int convertDecimalToBinary(int n) {

    int binaryNo = 0;
    int i = 0;

    while( n > 0) {

        int remainder = n % 2;

        binaryNo = remainder * pow(10, i++) + binaryNo;

        n = n / 2;
    }

    return binaryNo;

}
int main() {

     cout << "Enter number to convert it to binary" << endl;
    int n;
    cin>>n;
   

    int binaryNo = convertDecimalToBinary(n);
    cout << "binary Representation of : " << n << " is "<< binaryNo;

    return 0;
}