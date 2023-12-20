#include<iostream> 
#include<unordered_map>
using namespace std;
int findFirstRepeatingElem(int arr[], int size) {

    // Approach 1 -> Nested Loops
    // TC -> O(N^2) , SC -> O(1)
    // for(int i = 0; i < size; i++) {

    //     for(int j = i + 1; j < size; j++) {

    //         if(arr[i] == arr[j]) {

    //             return i + 1;
    //         }
    //     }
    // }

    // return -1;

    // Approach 2 -> Unordered map
    // TC -> 0(N) ,SC -> O(N)
    unordered_map<int, int> repeatingElem;
    for(int i = 0; i < size; i++) {
        repeatingElem[arr[i]]++;
    }

    for(int i = 0; i < size; i++) {

        if(repeatingElem[arr[i]] > 1) {
            return i + 1;
        }
    }

    return -1;

}
int main() {

    int arr[] = {1, 5, 2, 3, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    int ans = findFirstRepeatingElem(arr, size);

    cout << "first Repeating index of element : " << ans << endl;

    return 0;
}