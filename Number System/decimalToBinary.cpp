#include<iostream>
#include<math.h>
using namespace std;
int decimalToBinary(int n) {

   int binaryNo = 0;
   int i = 0;

   while(n > 0) {

    //   int digit = n % 2; slower 

      int digit = n & 1;  // faster

      binaryNo = (digit * pow(10, i++)) + binaryNo;

    //   n  = n/2;
      n = n >> 1;

   }

   return binaryNo;

}
int main() {

    cout << decimalToBinary(10);

    return 0;
}