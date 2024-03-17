 #include<iostream>
 #include<vector>
 #include<unordered_set>
using namespace std;
//  bool ls(vector<int> arr, int element) {

//         for(int i = 0; i < arr.size(); i++) {

//             if(element == arr[i]) {
//                 return true;
//             }
//         }

//         return false;

//     }
int longestConsecutive(vector<int>& nums) {

        // Brute Force Approach -> Nested Loops
        // TC -> Near O(N^2)
        // SC -> O(1)
        // int maxLen = 0;

        // for(int i = 0; i < nums.size() - 1; i++) {

        //     int x = nums[i];
        //     int len = 1;

        //     while(ls(nums, x + 1)) {
        //         len++;
        //         maxLen = max(len, maxLen);
        //         x+1;
        //     }
        // }

        // return maxLen;

        // Better Approach -> sort
        // TC -> O(N Log N) + O(N)
        // SC -> O(1)
        // int len = 0;
        // int maxLen = 1;
        // int lastElem = INT_MIN;

        // if(nums.size() == 0) return 0;

        // sort(nums.begin(), nums.end());

        // for(int i = 0; i < nums.size(); i++) {

        //     if(nums[i] - 1 == lastElem) {
        //         len+= 1 ;
        //         lastElem = nums[i];
        //     }
        //     else if(nums[i] != lastElem) {
        //         len = 1;
        //         lastElem = nums[i];
        //     }

        //     maxLen = max(maxLen, len);

        // }

        // return maxLen;

        // Optimal Approach 
        // TC -> O(N) + O(2*N)
        // SC -> O(N)
        int len = 0;
        int maxLen = 1;

        if(nums.size() == 0) return 0;

        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) st.insert(nums[i]);

        for(auto it : st) {

            if(st.find(it - 1) == st.end()) {

                int x = it;
                int len = 1;

                while(st.find(x + 1) != st.end()) {
                    len+=1;
                    x+=1;
                }

                maxLen = max(len, maxLen);
            }
        }

        return maxLen;
}

int main() {

    vector<int> nums{0,3,7,2,5,8,4,6,0,1};

    int ans = longestConsecutive(nums);

    cout << ans;

    return 0;
}