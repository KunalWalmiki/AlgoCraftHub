#include<iostream>
using namespace std;

// Approach 1 -> using two pointers 
void reverseArr(int l, int h, int n, int arr[]) {

    // base case
    if(l >= n / 2) return;

    swap(arr[l], arr[h]);
    reverseArr(l+1, h-1, n, arr);
    
}

// Approach 2 -> 
void reverseArray(int i, int n, int arr[]) {

    if(i > n / 2) return;

    swap(arr[i], arr[n - i - 1]);

    reverseArray(i+1, n, arr);

}
int main() {

    int n;
    cout << " Enter How many Elements you want " << endl;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    // reverseArr(0, n-1, n, arr);
    reverseArray(0, n, arr);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}