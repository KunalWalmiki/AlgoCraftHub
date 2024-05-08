#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int> arr, int k, int value) {

    int subArrCount = 1, sum = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(sum + arr[i] <= value) {

            sum += arr[i];

        } else {

            subArrCount++;
            sum = arr[i];
        }
    }

    return subArrCount;

}
int findLargestSubArrMin(vector<int> arr, int k) {

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    if(k > arr.size()) return -1;

    // for(int i = low; i < high; i++) {

    //     if(findMin(arr, k, i) == k) {
    //         return i;
    //     }
    // }

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(findMin(arr, k, mid) > k) low = mid + 1;

        else high = mid - 1;

    } 

    return low;

}

int main() {

     vector<int> arr{1, 2, 3, 4, 5};
    int k = 3;

    int ans = findLargestSubArrMin(arr, k);

    cout << ans << endl;

    return 0;

}

   
