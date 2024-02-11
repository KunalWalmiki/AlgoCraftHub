#include<iostream>
using namespace std;
int countDigit(int n) {

    int cnt = 0;
    while(n > 0) {

        // int digit = n % 10; //no need for this as where a just counting digits

        cnt++;

        n /= 10;

    }

    return cnt;
}
int main () {

    int n;
    cin>>n;

   int ans = countDigit(n);

   cout << ans;

    return 0;
}