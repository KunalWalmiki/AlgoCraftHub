#include<bits/stdc++.h>
using namespace std;

void findSubSetSum(int index, int sum, vector<int> &ans, vector<int> arr) {
        
        // base case
        if(index == arr.size()) {
            ans.push_back(sum);
            return;
        } 
        
        // Pick The Element
        findSubSetSum(index + 1, sum + arr[index], ans, arr);
        
        // Dont Pick The Element
        findSubSetSum(index + 1, sum, ans, arr);
        
}
 vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        findSubSetSum(0, 0, ans, arr);
        sort(ans.begin(), ans.end());
        
        return ans;
}

int main() {

    vector<int> arr{2, 3};
    int n = 2;

    vector<int> ans = subsetSums(arr, n);

    for(auto nums : ans) cout << nums << " ";
    
    return 0;
}