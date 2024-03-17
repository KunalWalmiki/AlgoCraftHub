#include<iostream>
using namespace std;
int recBinarySearch(int arr[], int start, int end, int target, int n) {

    if(start > end ) return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == target) {
        return mid;
    }
    else if(arr[mid] < target) {
        recBinarySearch(arr, mid + 1, end, target, n);
    } 
    else 
        recBinarySearch(arr, start, mid - 1, target, n); 
       
}
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter Number to be Searched " << endl;
    cin>>target;

    int index = recBinarySearch(arr, 0, n -1, target, n);

    cout << "Element Found at Index " << index << endl;

    return 0;

}