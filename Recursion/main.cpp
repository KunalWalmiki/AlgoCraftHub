#include<iostream>
using namespace std;

void f(int i) {

    // base case
    if(i > 5) return;

    cout << " Hello";
    f(i + 1);
    
}
int main() {

    f(1);

    return 0;
}