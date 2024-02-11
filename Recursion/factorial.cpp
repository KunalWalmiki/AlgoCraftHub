#include<iostream>
using namespace std;

// parameter recursion
void factorial(int n, int fact) {

    // base case
    if(n < 1) {

        cout << fact;
        return; 
    }

    fact = fact * n;
    factorial(n - 1, fact);


}

// returning recusion
int fact(int n) {

    //base case
    if(n < 1) return 1;

    return n * fact(n - 1);

}

int main() {

    int n;
    cout << "Enter Value Of N" << endl;
    cin >> n;

    int facti = 1;
    // factorial(n, fact);

    // cout << "Factorial is " << fact(n); 

    return 0;
}