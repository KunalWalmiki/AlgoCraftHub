#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        
        // vector<int> neg, pos;
        // for(int i = 0; i < nums.size(); i++) {

        //     if(nums[i] > 0) pos.push_back(nums[i]);

        //     else neg.push_back(nums[i]);

        // }

        // for(int i = 0; i < nums.size() / 2; i++) {

        //     nums[2*i] = pos[i];
        //     nums[2*i+1] = neg[i];
        // }

        // return nums;

        int evenIndex = 0;
        int oddIndex = 1;
        vector<int> ans(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] > 0) {
                ans[evenIndex] = nums[i];
                evenIndex += 2;
            }
            else {
                ans[oddIndex] = nums[i];
                oddIndex += 2;
            }
        }

        return ans;
}

int main() {

    vector<int> nums{3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrangeArray(nums);

    for(auto it : ans) {
        cout << it << " ";
    }
    
    return 0;
}