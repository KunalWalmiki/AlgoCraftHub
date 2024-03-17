 #include<iostream>
 #include<vector>
 using namespace std;
 
 int findFirstOccurrence(vector<int> nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
    
        while(start <= end) {

            if(nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1; 
            }
            else {
                start = mid + 1;
            }
            
            mid = start + (end - start) / 2;
        }

        return ans;

    }
    int findLastOccurrence(vector<int> nums, int target) {

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        int ans = -1;
    
        while(start <= end) {

            if(nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1; 
            }
            else {
                start = mid + 1;
            }

            mid = start + (end - start) / 2;
        }

        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int firstOccurIndex = findFirstOccurrence(nums, target);
        int lastOccurIndex = findLastOccurrence(nums, target);

        vector<int> ans;

        ans.push_back(firstOccurIndex);
        ans.push_back(lastOccurIndex);

        return ans;

}

int main() {

    vector<int> nums{5,7,7,8,8,10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);

    for(auto num : ans) {

        cout << num << " ";

    }

    return 0;
}