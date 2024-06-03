#include<bits/stdc++.h>
using namespace std;
int findMax(vector<vector<int>> arr, int n, int col) {

    int maxElem = INT_MIN;
    int index = -1;

    for(int i = 0; i < n; i++) {

        if(arr[i][col] > maxElem) {
            maxElem = arr[i][col];
            index = i;
        }
    }
    return index;
}
vector<int> findPeakElement(vector<vector<int>> arr) {

    // int maxElem = INT_MIN;

    // for(int i = 0; i < arr.size(); i++) {

    //     for(int j = 0; j < arr[0].size(); j++) {

    //         if(maxElem < arr[i][j]) maxElem = arr[i][j];

    //     }
    // }

    // return maxElem;

    // Optimal Approach 
    int n =  arr[0].size() - 1;
    int low = 0;
    int high = n;

    while(low <= high) {

        int mid = low + (high - low) / 2;
        int row = findMax(arr, arr.size() - 1, mid);
        int left = mid - 1 > 0 ? arr[row][mid - 1] : -1;
        int right = mid + 1 <= n ? arr[row][mid + 1] : -1;

        if(arr[row][mid] > left && arr[row][mid] > right) {

            return vector<int>{row, mid};

        } else if(arr[row][mid] < left) high = mid - 1;

        else low = mid + 1;
    

    }

    return vector<int>{-1, -1};


}
int main() {

    vector<vector<int>> arr{{4, 2, 5, 1, 4, 5}, {2, 9, 3, 2, 3, 2}, {1, 7, 6, 0, 1, 3}, {3, 6, 2, 3, 7, 2}};

    vector<int> ans = findPeakElement(arr);

    for(auto num : ans) {
        cout << num; 
    }

    return 0;
}