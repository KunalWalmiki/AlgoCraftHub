#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
        
     int minIndex = -1;

     for(int i = A.size() - 2; i >= 0; i--) {

         if(A[i] < A[i + 1]) {
             minIndex = i;
             break;
         }
    }

    if(minIndex == -1) {
        
        reverse(A.begin(), A.end());
        return A;

    }

    for(int i = A.size() - 1; i > minIndex; i--) {

        if(A[i] > A[minIndex]) {
            swap(A[i], A[minIndex]);
            break;
        }
    }

    reverse(A.begin() + minIndex + 1, A.end());

    return A;

    
      
}

int main() {

    vector<int> nums{1, 2, 3};

    vector<int> ans = nextGreaterPermutation(nums);

    for(auto num : ans) {

        cout << num << " ";

    }
    
    return 0;
}