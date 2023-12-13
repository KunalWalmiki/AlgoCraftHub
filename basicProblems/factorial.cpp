#include<iostream>
using namespace std;
int findFactorial(int n) {

    int fact = 1;

    for(int i = 1; i <= n; i++) {

        fact = i * fact;

    }

    return fact;

}
int main() {

    int n;
    cout << "Enter Number " << endl;
    cin>>n;

    int ans = findFactorial(n) ;

    cout << "Factorial of " << n << " is " << ans <<endl;

    return 0;

}