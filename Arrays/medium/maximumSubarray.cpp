#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {

        // Brute Force Approach 
        // TC -> O(n^3)
        // SC -> O(1)
        // int maxi = INT_MIN;

        // for(int i = 0; i < nums.size(); i++) {

        //     for(int j = i; j < nums.size(); j++) {

        //         int sum = 0;
        //         for(int k = i; k <= j; k++) {

        //             sum += nums[k];

        //         }

        //         maxi = max(maxi, sum);
        //     }
        // }

        // return maxi;

        // Better  Approach 
        // TC -> O(n^2)
        // SC -> O(1)
        // int maxi = INT_MIN;

        // for(int i = 0; i < nums.size(); i++) {

        //       int sum = 0;
        //     for(int j = i; j < nums.size(); j++) {

        //         sum += nums[j];
        //         maxi = max(maxi, sum);
        //     }
           
        // }

        // return maxi;

        // //Optimal Approach -> kadane's algorithm  
        // TC -> O(N) + O(N)
        // SC -> O(1) 
        int maxi = INT32_MIN;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            maxi = max(maxi, sum);

            if(sum < 0) {
                sum = 0;
            }

        }

        return maxi;
}

int main() {

    vector<int> nums{5, 4, -1, 7, 8};

    int ans = maxSubArray(nums);

    cout << ans;

    return 0;
}