#include<iostream>
#include<vector>
using namespace std;

// Approach 1 -> using nested loop -> TC -> O(n2)
vector<pair<int, int> > findPairSum(vector<int> arr, int target) {

    vector<pair<int, int>> result;

    for(int i = 0; i < arr.size(); i++) {

        for(int j = i + 1; j <arr.size(); j++) {

            if(arr[i] + arr[j] == target) 
                  result.push_back(make_pair(arr[i], arr[j]));
        }
    }

    return result;

    
}
int main() {

    vector<int> arr{1, 2, 3, 4, 5};
    int target = 5;

    vector<pair<int, int>> result = findPairSum(arr, target);

    for(auto num : result) {

        cout << " ( "<< num.first << ", " << num.second << " )" << " ";
    }

    return 0;
}