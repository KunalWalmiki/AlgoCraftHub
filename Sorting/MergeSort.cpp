#include<iostream>
#include<vector>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {

    vector<int> ans;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high) {

        if(arr[left] <= arr[right]) {
            ans.push_back(arr[left]);
            left++;

        } else {

            ans.push_back(arr[right]);
            right++;

        }
    }

    // if elements left in firstPtr array
    while(left <= mid) {
        ans.push_back(arr[left]);
        left++;
    }

    // if elements left in LastPtr array
    while(right <= high) {
        ans.push_back(arr[right]);
        right++;
    }
    // re-assigning values of ans array to orignial array
    for(int i = low; i <= high; i++) {

        arr[i] = ans[i - low];

    }
}

void MergeSort(int arr[], int low, int high) {

    // base case
    if(low >= high) return;

    int mid = (low + high) / 2;

    MergeSort(arr,low, mid);
    MergeSort(arr, mid+1, high);

    // backtracking
    Merge(arr,low, mid, high);

}
int main() {

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++) cin>>arr[i];

    cout << "Before Sorting " << endl;
    for(auto nums : arr) {
        cout << nums << " ";
    } cout << endl;

    MergeSort(arr, 0, n-1);

    cout << "After Sorting " << endl;
    for(auto num : arr) {
        cout << num << " ";
    } 

    return 0;

}