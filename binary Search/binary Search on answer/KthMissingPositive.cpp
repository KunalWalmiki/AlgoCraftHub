#include<iostream>
#include<vector>
using namespace std;


int findKthElement(vector<int> arr, int k) {

    // Brute Force Approach  -> Linear Search 
    // TC -> O(N)
    // SC -> O(1)
    // for(int i = 0; i < arr.size(); i++) {

    //     if(arr[i] < k) k++;

    // }

    // return k;

    // Optimal Approach -> binary Search 
    // TC -> O()
    // SC -> O(1)

    int low = 0, high = arr.size() - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        int missing = arr[mid] - (mid + 1);

        if(missing < k) low = mid + 1;

        else  high = mid - 1;

    }

    return low + k;

}
int main() {

    vector<int> arr{2, 3, 4, 7, 11};
    int k = 5;

    int kthPositiveElement = findKthElement(arr, k);

    cout << kthPositiveElement << endl;

    return 0;
}