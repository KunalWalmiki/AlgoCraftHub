#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> arr, int m, int target) {

    int low = 0; 
    int high = m - 1;
    int ans = m;
    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(arr[mid] >= target) {

            ans = mid;
            high = mid - 1;
        
        } else {

            low = mid + 1;

        }
    } 

    return ans;

}
int findRowsWithMax1s(vector<vector<int>> arr, int n, int m) {

    // int index = -1;
    // int maxCount = -1;

    // for(int i = 0; i < n; i++) {

    //     int count = 0;

    //     for(int j = 0; j < m; j++) {

    //         if(arr[i][j] == 1) {

    //             count++;
    //             maxCount = max(count, maxCount);
    //             index = i;

    //         }
    //     }
    // }

    // return index;


    int index = -1;
    int maxCount = -1;

    for(int i = 0; i < n; i++) {

        int number_of_ones = m - bs(arr[i], m, 1);
        cout << number_of_ones << endl;

        if(number_of_ones > maxCount) {

            maxCount = max(number_of_ones, maxCount);
            index = i;

        }
    }

    return index;

}
int main() {

    vector<vector<int>> arr{{0, 1, 1, 1},
                            {0, 0, 1, 1},
                            {1, 1, 1, 1},
                            {0, 0, 0, 0}
                            };

    int n = 4;
    int m = 4;

    int index = findRowsWithMax1s(arr, n, m);

    cout << index << endl;  

    return 0;
}
