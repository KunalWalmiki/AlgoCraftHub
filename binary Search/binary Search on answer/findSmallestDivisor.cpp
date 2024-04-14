#include <bits/stdc++.h>
using namespace std;
int Sum(vector<int> arr, int threshold, int mid) {

    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {

        sum += ceil((double)(arr[i]) / (double)(mid));

        // if(sum > threshold) return sum;
    }

    return sum;

}
int findSmallestDivisor(vector<int>& arr, int limit) {

    // Brute Force Approach -> linear Search 
    // TC -> O(max(arr[]) * N)
    // SC -> O(1)
    // int n = arr.size(); 
    // int maxi = *max_element(arr.begin(), arr.end());


    // for (int d = 1; d <= maxi; d++) {
    //     int sum = 0;
    //     for (int i = 0; i < n; i++) {
    //         sum += ceil((double)(arr[i]) / (double)(d));
    //     }
    //     if (sum <= limit)
    //         return d;
    // }

    // return -1;

    // Optimal Approach -> Binary Search 
    // TC -> O(Log max(arr[]) * N)
    // SC -> O(1)
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    int mid = low + (high - low) / 2;
    int ans = -1;

    while(low <= high) {

        if(Sum(arr, limit, mid) <= limit) {
            ans = mid;
            high = mid - 1;
        }
        else {

            low = mid + 1;

        }

        mid = low + (high - low) / 2;

    }

    return ans;

}

int main() {

    vector<int> nums{1, 2, 5, 9};
    int threshold = 6;

    int smallestDivisor = findSmallestDivisor(nums, threshold);

    cout << " Smallest Divisor : " << smallestDivisor << endl;

    return 0;
}