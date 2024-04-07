#include<iostream>
#include<vector>
using namespace std;

int find(int mid, int N, int M) {

    int sum = mid;

    for(int i = 1; i < N; i++) {

        sum *= mid;
        if(sum > M) return 2;
    }

    if(sum == M) return 1;
    
    return 0;
}


int findSqrt(int N, int M) {

    // Brute Force Approach
    // for(int i = 1; i <= M; i++) {

    //     int sum = i;

    //     for(int j = 1; j < N; j++) sum *= i;

    //     if(sum == M) return i;

    //     else if(sum > M) break;

    // }

    // return -1;

    // Optimal Approach : Binary Search
    int low = 1;
    int high = M;
    int mid = low + (high - low) / 2;

    while(low <= high) {

        int val = find(mid, N, M);

        if(val == M) return mid;

        else if(val > M) high = mid - 1;

        else low = mid + 1;

        mid = low + (high / low) / 2;

    }

    return -1;

}
int main() {

    int N = 4;
    int M = 69;

    int sqrt = findSqrt(N, M);

    cout << sqrt << endl;
}