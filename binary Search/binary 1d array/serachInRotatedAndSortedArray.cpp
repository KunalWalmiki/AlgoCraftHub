#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while(start <= end) {

            if(nums[mid] == target) return mid;

            // check which side is sorted
            if(nums[start] <= nums[mid]) {

                if(nums[start] <= target && target <= nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }

            } else {


                if(nums[mid] <= target && target <= nums[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }

            mid = start + (end - start) / 2;

        }

        return -1;
}

int main() {

    vector<int> nums{4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int ans = search(nums, target);

    if(ans == -1) {

        cout << "Element Not Found" << endl;

    } else {

        cout << " Element Found At " << ans << " Index" << endl;
    }

    return 0;
}