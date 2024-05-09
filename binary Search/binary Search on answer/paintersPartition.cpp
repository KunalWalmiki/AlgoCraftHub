#include<bits/stdc++.h>
using namespace std;
int assignBoards(vector<int> arr, int k, int time) {

    int painter = 1, takenTime = 0;

    for(int i = 0; i < arr.size(); i++) {

        if(takenTime + arr[i] <= time) {

            takenTime += arr[i];

        } else {

            painter++;
            takenTime = arr[i];

        }
    }

    return painter;

}
int partition(vector<int> arr, int k) {

    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    if(k > arr.size()) return -1;

    // for(int i = low; i < high; i++) {

    //     if(assignBoards(arr, k, i) == k) {

    //         return i;

    //     }
    // }

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(assignBoards(arr, k, mid) > k) low = mid + 1;

        else high = mid - 1;

    }

    return low;

}
int main() {

    vector<int> arr{8, 6, 10, 3, 2, 7, 10};
    int k = 7;

    int ans = partition(arr, k);

    cout << ans << endl;

    return 0;
}