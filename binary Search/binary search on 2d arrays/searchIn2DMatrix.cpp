#include<bits/stdc++.h>
using namespace std;
bool bs(vector<int> arr, int target) {

    int low = 0;
    int high = arr.size() - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {

            return true;

        } else if(arr[mid] < target) {

            low = mid + 1;

        } else {

            high = mid - 1;

        }
    }

    return false;

}
bool find(vector<vector<int>> matrix, int target) {

    //  for(int i = 0; i < matrix.size(); i++) {

    //     for(int j = 0; j < matrix[0].size(); j++) {

    //         if(matrix[i][j] == target) return true;
    //     } 
    // }

    // return false;

    // for(int i = 0; i < matrix.size(); i++) {

    //     if(matrix[i][0] <= target && target <= matrix[i][matrix[0].size() - 1]) {

    //         return bs(matrix[i], target);

    //     }
    // }

    // return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high =  n * m - 1;

    while(low <= high) {

        int mid = low + (high - low) / 2;
        int i = mid / m;
        int j = mid % m;

        if(matrix[i][j] == target) return true;

        else if(matrix[i][j] < target) low = mid + 1;

        else high = mid - 1;

    }

    return false;

}
int main() {

    vector<vector<int>> matrix{
                            //    {1, 3, 5, 7}, 
                            //    {10, 11, 16, 20},
                            //    {23, 30, 34, 60}
                                  {1, 2}
                               };

    int target = 2;

    bool ans = find(matrix, target);

    cout << ans << endl;

    return 0;
}