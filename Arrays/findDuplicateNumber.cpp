#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findDuplicateElement(vector<int> &nums){

    // Approach 1 -> Sort STL 
    // TC -> O(N Log N), SC -> O(N)
    // int ans = -1;
    // sort(nums.begin(), nums.end());

    // for(int i = 0; i < nums.size() - 1; i++) {

    //     if(nums[i] == nums[i + 1]) {
    //         ans = nums[i];
    //         break;
    //     }
    // }

    // return ans;


    //Approach 2 -> negative marking 
    // TC -> O(N), SC -> O(1)
    // int ans = -1;

    // for(int i = 0; i < nums.size(); i++) {

    //     int index = abs(nums[i]); 

    //     if(nums[index] < 0) {

    //         ans = index;
    //         break;
    //     }

    //     nums[index] *= -1;

    // }

    // return ans;

    // Approach 3 -> swapping postions
    while(nums[0] != nums[nums[0]]) {

        swap(nums[0], nums[nums[0]]);

    }

    return nums[0]; 

} 
int main() {

    vector<int> nums{1, 3, 4, 2, 2};

    int duplicateElement = findDuplicateElement(nums);

    cout << "Duplicate Number is : " << duplicateElement << endl;

    return 0;
}