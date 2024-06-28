#include<bits/stdc++.h>
using namespace std;

void findUniqueCombination(int index, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> candidates) {

        if(target == 0) {

            ans.push_back(ds);
            return;

        }


        for(int i = index; i < candidates.size(); i++) {

            // edge case i > index -> to consider duplicate element when we are just starting the 
            // journey of picking the elements
            if(i > index && candidates[i] == candidates[i - 1]) continue;

            if(candidates[i] > target) break;

            ds.push_back(candidates[i]);
            findUniqueCombination(i + 1, target - candidates[i], ds, ans, candidates);
            ds.pop_back();

        }

}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        // sort the array to get sorted combination 
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;

        findUniqueCombination(0, target, ds, ans, candidates);

        return ans;

}

int main() {

    vector<int> candidates{2, 5, 2, 1, 2};
    int target = 5;

    vector<vector<int>> ans = combinationSum2(candidates, target);

    for(auto it : ans) {

        cout << "[ ";
        for(auto num : it) {
            cout << num << " " ;
        }cout << "]";
        cout << endl;
    }

    return 0;
}