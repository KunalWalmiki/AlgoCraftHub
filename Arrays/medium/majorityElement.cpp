#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {

        // Brute Force Approach  : - nested loops + count
        // TC -> O(N^2) 
        // SC -> O(1) 
        // for(int i = 0; i < nums.size(); i++) {

        //     int count = 0;
        //     for(int j = 0; j < nums.size(); j++) {

        //         if(nums[i] == nums[j]) count++;

        //     }

        //     if(count > nums.size()/2) return nums[i];

        // }   

        // return -1;

        //Better Approach : using map
        // TC -> O(N)
        // SC -> O(N) 
        // unordered_map<int, int> hashMap;

        // for(int i = 0; i < nums.size(); i++) {

        //     hashMap[nums[i]]++;

        // }

        // for(int i = 0; i < nums.size(); i++) {

        //     if(hashMap[nums[i]] > nums.size() / 2) return nums[i];

        // }

        // return -1;

        //Optimal Approach -> Moore's algorithm 
        // TC -> O(N) + O(N)
        // SC -> O(1) 
        int ele = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(count == 0) {
                count = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele) 
                count++;
            else 
                 count--;    
        }

        int count1 = 0;
        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == ele) 
                count++;

        }

        if(count > nums.size() / 2) return ele;

        return -1;
    }

int main() {

    vector<int> nums{3, 2, 3};

    int ans = majorityElement(nums);

    cout << ans;

    return 0;
}