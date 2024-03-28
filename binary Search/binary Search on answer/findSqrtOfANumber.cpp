#include<iostream>
#include<vector>
using namespace std;

int floorSqrt(int n)
{
    // Write your code here.

    // long long ans;

    // for(int i = 1; i <= n; i++) {

    //       if(i * i <= n) {
    //           ans = i;

    //       } else {

    //           break;

    //       }
    // }

    // return ans;

    int  low = 1;
    int high = n;
    long long mid = low + (high - low) / 2;

    while(low <= high) {

        long long val = mid * mid;

        if(val <= (long long)(n)) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

        mid = low + (high - low) / 2;
    }

    return high;
}

int main() {

   int n = 25;

    int ans = floorSqrt(n);

    cout << ans;

    return 0;
}