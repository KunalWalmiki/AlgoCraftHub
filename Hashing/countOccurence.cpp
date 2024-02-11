#include<iostream>
using namespace std;
int findOccurence(int arr[], int size, int Number) {

    int count = 0;

    for(int i = 0; i < size; i++) {

        if(arr[i] == Number) 
            count += 1;
    }

    return count;
}
int main() {
    int Number;
    cout<< "Enter the Number" << endl;
    cin >>Number;

    int arr[5] = {1, 2, 3, 1, 4};
    int size = sizeof(arr) / sizeof(int);

    int ans = findOccurence(arr, size, Number);

    cout << "Occurence Count " << ans << endl;

    return 0;
}