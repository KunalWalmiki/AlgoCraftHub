#include<bits/stdc++.h>
using namespace std;
int canWeAllocateBooks(vector<int> arr, int k, int pages) {

    int studentCount = 1, noOfPages = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(noOfPages + arr[i] <= pages) {

            noOfPages += arr[i];

        } else {

            studentCount++;
            noOfPages = arr[i];

        }
    }

    return studentCount;

}
int findMinBooks(vector<int> arr, int k) {

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    if(k > arr.size()) return -1;

    // for(int i = start; i < limit; i++) {

    //     if(canWeAllocateBooks(arr, k, i) == k) {

    //         return i;
    //     }

    // }

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(canWeAllocateBooks(arr, k, mid) > k) low = mid + 1;

        else high = mid - 1;
        
    }

    return low; 
}    
int main() {

    vector<int> arr{25, 46, 28, 49, 24};
    int k = 4;

    int ans = findMinBooks(arr, k);

    cout << ans << endl;

    return 0;
}