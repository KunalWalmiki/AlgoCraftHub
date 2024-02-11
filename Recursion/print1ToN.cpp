#include<iostream>
using namespace std;
void Print(int i, int N) {

    // base case 
    if(i > N) return;

    cout << i ;

    Print(i + 1, N);

}

int main() {

    Print(1, 5);

    return 0;
}