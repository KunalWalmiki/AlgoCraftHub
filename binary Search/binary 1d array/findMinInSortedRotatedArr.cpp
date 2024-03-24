 #include<iostream>
 #include<vector>
 using namespace std;

int findMin(vector<int>& nums) {
         
       int low = 0;
       int high = nums.size() - 1;
       int mid = low + (high - low) / 2;
       int mini = INT16_MAX;

       while(low <= high) {

          if(nums[low] <= nums[high]) {
            mini = min(nums[low], mini);
            break;
          }
          
          if(nums[low] <= nums[mid]) {
              
              mini = min(nums[low], mini);
              low = mid + 1;
          }
          else {

               mini = min(nums[mid], mini);
               high = mid - 1;
          }

          mid = low + (high - low) / 2;

       }

       return mini;

}

int main() {

    vector<int> nums{3,4,5,1,2};

    int minValue = findMin(nums);

    cout << minValue << endl;
    
    return 0;
}
