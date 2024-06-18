#include<bits/stdc++.h>
using namespace std;

void findCombination(vector<int> arr, int index, int target, vector<int> result, vector<vector<int>> &ans) {

        vector<int> temp;
        if(index == arr.size()) {

            if(target == 0) {

                for(auto it : result) temp.push_back(it);
                ans.push_back(temp);
                while(temp.size() > 0) {
                    temp.pop_back();
                }
                
            } 
            return;
        }

        if(arr[index] <= target) {

            result.push_back(arr[index]);
            findCombination(arr, index, target - arr[index], result, ans);
            result.pop_back();
        }

        findCombination(arr, index + 1, target, result, ans);

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> result;
        vector<vector<int>> ans;
        findCombination(candidates, 0, target, result, ans);

        return ans;
}
int main() {

    vector<int> candidates{2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(candidates, target);

    for(auto row : ans) {

        for(auto element : row) {

            cout << element << " ";
        }
    }

    return 0;
}