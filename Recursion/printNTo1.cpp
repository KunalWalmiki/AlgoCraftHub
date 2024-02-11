#include<iostream>
using namespace std;

// normal recursion
void Print(int N) {

    if(N == 0) return;

    cout << N << " ";

    Print(N-1);

}

// recursion with backtracking 
void Print1(int i, int N) {

    if(i > N) return;

    Print1(i + 1, N);

    // backtrack
    cout << i;

}
int main() {

    // Print(5);

    Print1(1, 5);

    return 0;
}