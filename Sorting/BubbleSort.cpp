#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {

        bool didSwap = false;

        for(int j = 0; j < size - i - 1; j++) {
            
            if(arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if(didSwap == false) break;
    }
}
int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i < n; i++) cin>>arr[i];

    cout << "Before Sorting " << endl;
    for(auto it : arr) {
        cout << it << " ";
    }cout << endl;

    BubbleSort(arr, n);

    cout << "After Sorting " << endl;
    for(auto it : arr) {
        cout << it << " ";
    }
    return 0;
}