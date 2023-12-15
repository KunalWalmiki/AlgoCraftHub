#include<iostream>
using namespace std;
int findUniqueElement(int arr[], int arrSize) {

    int ans = 0;

    for(int i = 0 ; i < arrSize; i++) {

        ans = arr[i] ^ ans;

    }

    return ans;
}
int main() {

    int arr[] = {1, 2, 3, 2, 3, 4, 4, 5, 6, 5, 6};
    int arrSize = 11;

    int uniqueElement = findUniqueElement(arr, arrSize);

    cout << "Unqiue Element is : " << uniqueElement << endl;

    return 0;
}