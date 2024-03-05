#include<iostream>
#include<vector>
#include<unordered_map> 
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

        // Brute Force Approach TC -> O(N^2) near -> SC -> O(1)
        // vector<int> ans;

        // for(int i = 0; i < nums.size(); i++) {

        //     for(int j = i + 1; j < nums.size(); j++) {

        //         if(nums[i] + nums[j] == target) {

        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }

        // return ans;


        // Appraoch 2 -> using hashmap -> unordered_map
        // TC -> O(N)
        // SC -> O(N)
        vector<int> ans;
        unordered_map<int, int> mpp;

        for(int i = 0; i < nums.size(); i++) {

            int rem = target - nums[i];

            if(mpp.find(rem) != mpp.end()) {

                ans.push_back(mpp[rem]);
                ans.push_back(i);
                return ans;
            }

            mpp[nums[i]] = i;

        }

        return ans;    
}

int main() {

    vector<int> nums{2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    for(auto num : ans) {
        cout << num << " ";
    }

    return 0;
}