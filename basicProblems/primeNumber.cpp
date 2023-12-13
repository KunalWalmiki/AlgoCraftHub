#include<iostream>
using namespace std;

bool checkPrime(int n) {

    for(int i = 2; i < n ; i++) {
         
         if(n % i == 0) return false;

    }

    return true;
}


int main() {

    int n;
    cout << "Enter Number to check prime" << endl;
    cin>>n;

    bool ans = checkPrime(n);

    if(ans) {
        cout << "Given number is prime" << endl;
        
    }
    else {

        cout << "Given number is not prime" << endl;
    }

    return 0;
}