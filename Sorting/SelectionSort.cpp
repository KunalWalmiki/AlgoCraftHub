#include<iostream>
using namespace std;

void selectionSort(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {

        int minIndex = i;

        for(int j = i; j < size; j++) {
        
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }

        }
       
        swap(arr[minIndex], arr[i]);

    }
}
int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    cout << "Before Sorting " << endl;
    for(auto nums : arr) {
        cout << nums << " ";
    }cout << endl;

    selectionSort(arr, n);

    cout << "After Sorting " << endl;
    for(auto nums : arr) {
        cout << nums << " ";
    }

    return 0;
}
