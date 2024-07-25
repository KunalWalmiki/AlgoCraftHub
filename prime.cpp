#include<iostream>
using namespace std;

bool isPrime(int N) {

    int count = 0;
    
    for(int i = 1; i <= N; i++) {

         if(N % i == 0) {
            count++;
         }
    }
    
    if(count == 2) return true;
    else return false;

}
int main() {

    int N = 4;

    cout << isPrime(N) << endl;

    return 0;
}