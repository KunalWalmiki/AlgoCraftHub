#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Approach 1 -> sort -> TC-> O(N Log N) -> SC -> O(1)
void findSolution(vector<int> arr, int n) {

    sort(arr.begin(), arr.end());

    int sLargest = arr[n-2];
    int sSmallest = arr[1];

    cout << "Second Largest " << sLargest << endl;
    cout << "Second Smallest " << sSmallest << endl;

}
// Approach 2 -> TC -> O(N) SC-> O(1)
int findSecondLargest(vector<int> arr, int n) {

    int Largest = INT32_MIN;
    int sLargest = Largest;

    for(int i = 0; i < n; i++) {

        if(arr[i] > Largest) {
            sLargest = Largest;
            Largest = arr[i];
        }
    }

    return sLargest;

}

int findsecondSmallest(vector<int> arr, int n) {

    int Smallest = INT32_MAX;
    int sSmallest = INT32_MAX;

    for(int i = n-1; i >= 0; i--) {

        if(arr[i] < Smallest) {
            sSmallest = Smallest;
            Smallest = arr[i];
        }
    }

    return sSmallest;
}
int main() {

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i< n; i++) cin>>arr[i];

    // int secondLargest = findSecondLargest(arr,n);
    // int secondSmallest = findsecondSmallest(arr, n);

    // cout << "Second Largest element in array is " << secondLargest << endl;
    
    // cout << "Second Smallest element in array is " << secondSmallest << endl;

    findSolution(arr,n);
    
    return 0;
}