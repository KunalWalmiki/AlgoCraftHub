#include<iostream>
#include<vector>
using namespace std;
 //Approach 1 -> three pointer 
    // void sortColors(vector<int>& nums) {
        
    //     int l , m, e;
    //     l=m=0;
    //     e=nums.size() - 1;

    //     while(m <= e) {

    //           // Algo 1 -> not optimes -> failed  to pass all the test cases 
    //         // if(nums[l] == 0){
    //         //     l++;
    //         //     m++;
    //         // }
    //         // else if(nums[m] == 1){
    //         //      m++;
    //         // }
    //         // else if(nums[h] == 2){
    //         //      h--;

    //         // }
    //         // else if(nums[l] == 2) {

    //         //     swap(nums[l],nums[h]);
    //         // } 
    //         // else {

    //         //     swap(nums[l], nums[m]);   

    //         // }

    //         // Algo 2 -> passed all test cases
    //         if(nums[m] == 0) {
    //             swap(nums[l], nums[m]);
    //             l++;
    //             m++;
    //         }
    //         else if(nums[m] == 1) {
    //             m++;
    //         }
    //         else {
    //             swap(nums[m], nums[e]);
    //             e--;
    //         }
    //     }
    // }

    // Approach 2 using extra index
    void sortColors(vector<int>& nums) {

         int i = 0;
         int ZeroCount = 0;
         int firstRed = 0;

         while(i < nums.size()) {

             if(nums[i] == 0) {
                 ++ZeroCount;
                 swap(nums[i], nums[firstRed++]);
             }
             ++i;
         }  

         i = firstRed;
         while(i < nums.size()) {

             if(nums[i] == 1) {

                 swap(nums[firstRed++], nums[i]);

             }
             ++i;
         }
    }

int main() {

    vector<int> nums{2, 0, 2, 1, 1, 0};

    cout << "Before Sorting " << endl;

    for(auto num : nums) {
        cout << num << " ";
    }cout << endl;

    sortColors(nums);

    cout << "After Sorting " << endl;

    for(auto num : nums) {
        cout << num << " ";
    }

    return 0;
}