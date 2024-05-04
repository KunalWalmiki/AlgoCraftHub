#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canWePlaceCows(vector<int> arr, int cows, int dist) {

    int cowsCount = 1, lastCow = arr[0];
    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] - lastCow >= dist) {
            cowsCount++;
            lastCow = arr[i];
        } 

    }

     if(cowsCount >= cows) return true;

     else return false;
}

int findMaxDistance(vector<int> &a rr, int k) {

    sort(arr.begin(), arr.end());
    
    // for(int i = 1; i < limit; i++) {

    //     if(canWePlaceCows(arr, k, i) == false) {

    //         return i - 1;

    //     }

    // }

    // return limit;

    int limit = arr[arr.size() - 1] - arr[0];
    int low = 1;
    int high = limit;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(canWePlaceCows(arr, k, mid) == true) {

            low = mid + 1;

        } else {

            high = mid - 1;
        }

    }

    return high;


}
int main() {

    vector<int> arr{4, 2, 1, 3, 6};
    int k = 2;

    int maxDistance = findMaxDistance(arr, k);

    cout << maxDistance << endl;

    return 0;
}