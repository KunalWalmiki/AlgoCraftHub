#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
vector<int> findUnion(vector<int> arr1, vector<int> arr2) {

    unordered_set<int> uniquieElements;
    vector<int> ans;

    for(int i = 0; i < arr1.size(); i++) {

        uniquieElements.insert(arr1[i]);

    }

    for(int i = 0; i < arr2.size(); i++) {

        uniquieElements.insert(arr2[i]);

    }

    for(auto it : uniquieElements) {

        ans.push_back(it);

    }

    sort(ans.begin(), ans.end());

    return ans;

    
}
int main() {

    vector<int> arr1{1, 3, 2 , 5, 2, 7, 4};
    vector<int> arr2{3, 5, 6, 7, 3, 2};

    vector<int> ans = findUnion(arr1, arr2);

    for(auto num : ans) {

        cout << num << " ";

    }

    return 0;
}