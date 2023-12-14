#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1 -> using sort function
// sort func 

// Approach 2 -> Two Pointer Approach
void Sort(vector<int> &arr) {

    int i = 0;
    int j = arr.size() - 1;
    
    while(i < j) {

        if(arr[i] == 0) {
            i++;
        }
        else if(arr[j] == 1) {
            j--;
        }
        else {
            swap(arr[i], arr[j]);
        }
    }
}
int main() {

    vector<int> arr{1, 0, 1, 1, 0, 1, 1};

    cout << "Before Sorting " << endl;
     for(auto num : arr) {

        cout << num << " ";

    }

    Sort(arr);

    // sort(arr.begin(), arr.end());

    cout << "After Sorting " << endl;
    for(auto num : arr) {

        cout << num << " ";

    }
    return 0;
}