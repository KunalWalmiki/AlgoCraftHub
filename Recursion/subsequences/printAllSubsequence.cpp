#include<bits/stdc++.h>
using namespace std;
// print all subsequence 
void printSubsequence(int arr[], int k, int n, int index, vector<int> ans, int sum) {
    
    // base case
    if(index == n) {

        if(sum == k) {

            for(auto it : ans) cout << it << " ";
            cout << endl;
            return;

        } else return;

    }

    // Pick the element
    ans.push_back(arr[index]);
    sum += arr[index];

    printSubsequence(arr, k, n, index + 1, ans, sum);

    // Do not Pick thye element of current index
    ans.pop_back();
    sum -= arr[index];

    printSubsequence(arr, k, n, index + 1, ans, sum);

}

// print single ans
// bool printSubsequence(int arr[], int k, int n, int index, vector<int> ans, int sum) {
    
//     // base case
//     if(index == n) {

//         if(sum == k) {

//             for(auto it : ans) cout << it << " ";
//             cout << endl;
//             return true;

//         } else return false;

//     }

//     // Pick the element
//     ans.push_back(arr[index]);
//     sum += arr[index];

//     if(printSubsequence(arr, k, n, index + 1, ans, sum) == true) return true;

//     // Do not Pick thye element of current index
//     ans.pop_back();
//     sum -= arr[index];

//     if(printSubsequence(arr, k, n, index + 1, ans, sum) == true) return true;

//     return false;
// }

// return count of posible ans
int printSubsequence(int arr[], int k, int n, int index, vector<int> ans, int sum) {
    
    // base case
    if(index == n) {

        if(sum == k) {

            // for(auto it : ans) cout << it << " ";
            // cout << endl;
            return 1;

        } else return 0;

    }

    // Pick the element
    ans.push_back(arr[index]);
    sum += arr[index];

    int left = printSubsequence(arr, k, n, index + 1, ans, sum);

    // Do not Pick thye element of current index
    ans.pop_back();
    sum -= arr[index];

    int right = printSubsequence(arr, k, n, index + 1, ans, sum);

    return left + right;
}
int main() {

    int arr[] = {1, 2, 1};
    int k = 2;
    vector<int> ans;
    int n = 3;

    cout << "Count : " << printSubsequence(arr,k, n, 0, ans, 0);

    return 0;
}
