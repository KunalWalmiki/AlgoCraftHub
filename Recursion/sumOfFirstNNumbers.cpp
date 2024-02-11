#include<iostream>
using namespace std;

// parameterised recursion function
void printSum(int n, int sum) {

    // base case 
    if(n < 0) {
        cout << sum << endl;
        return;
    }

    sum = sum + n;
    printSum(n - 1, sum);

}
int printSum1(int n) {

    // base case
    if(n < 0) return 0;

    return n + printSum1(n - 1); 
    
}
int main() {

    int n;
    cout << "Enter N";
    cin >> n;
    int sum = 0;
    // printSum(n, sum );
    int ans = printSum1(n);
    cout << "ans " << ans;

    return 0;

}