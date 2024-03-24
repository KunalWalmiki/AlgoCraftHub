#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size() == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[nums.size() - 1] != nums[nums.size() - 2]) return nums[nums.size() - 1];

        int low = 1;
        int high = nums.size() - 2;
        int mid = low + (high - low) / 2;

        while(low <= high) {

            if(nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) return nums[mid];

            if((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
                (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {

                    low = mid + 1;

            } else {

                high = mid - 1;
            }

            mid = low + (high - low) / 2;

        } 

        return -1;
        
}

int main() {

    vector<int> nums{1,1,2,2,3,3,4,4,5,6,6,7,7,8,8};

    int element = singleNonDuplicate(nums);

    cout << element << endl;
    
    return 0;
}