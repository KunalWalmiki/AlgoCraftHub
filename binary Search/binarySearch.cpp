#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            start = mid + 1;
        }
        else 
            end = mid - 1;

        mid = start + (end - start) / 2;

    }
     
    return -1;

}
int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter Number to be Searched " << endl;
    cin>>target;

    int index = binarySearch(arr, n, target);

    cout << "Element Found at Index " << index << endl;

    return 0;
}