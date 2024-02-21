#include<iostream>
using namespace std;
int QSort(int arr[], int low, int high) {

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {

        while(arr[i] <= pivot && i <= high) i++;

        while(arr[j] > pivot && j >= low) j--;

        if(i < j) swap(arr[i], arr[j]);

    }

    swap(arr[low], arr[j]);
    return j;

}
void quickSort(int arr[], int low, int high) {

    if(low < high) {

        int pivotIndex = QSort(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);

    }
}
int main() {

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    cout <<"before Sorting" << endl; 
    for(auto num : arr) cout << num << " ";
    cout << endl;

    quickSort(arr, 0, n-1);

    cout <<"After Sorting" << endl; 
    for(auto num : arr) cout << num << " ";
    cout << endl;
    
    return 0;
}
