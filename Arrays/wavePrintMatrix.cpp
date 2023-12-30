#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> &arr) {

    vector<int> ans;

    for(int startCol = 0; startCol < arr[0].size(); startCol++) {

        // even col
        if((startCol&1) == 0) {

            for(int i = 0; i <arr.size(); i++) {

                ans.push_back(arr[i][startCol]);
            }
        }
        else {

            for(int i  = arr.size() - 1; i >= 0; i--) {
                 ans.push_back(arr[i][startCol]);
            }
        }
    } 

    return ans;
}
int main() {

    vector<vector<int>> arr{{1,2,3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = wavePrint(arr);

    for(auto num : ans) {

        cout << num << " ";

    }

    return 0;
}
