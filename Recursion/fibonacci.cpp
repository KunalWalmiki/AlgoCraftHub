#include<iostream>
using namespace std;
int fibonacci(int n) {

    // base case 
    if(n <= 1) return n;

    int last = fibonacci(n - 1);
    int slast = fibonacci(n - 2);

    return last + slast;
    
}
int main() {

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}