#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// Appraoch 1 -> using nested loop -> TC -> O(n2)
// vector<int> intersectionArray(vector<int> arr1, vector<int> arr2) {

//     vector<int> result;

//     for(int i = 0; i < arr1.size(); i++) {

//         for(int j = 0; j < arr2.size(); j++) {

//             if(arr1[i] == arr2[j]) {
//                 result.push_back(arr1[i]);
//             }
//         }
//     }

//     return result;

// }


// Approach 2 -> using unordered_set -> TC -> O(n)
vector<int> intersectionArray(vector<int> arr1, vector<int> arr2) {

    // create unique element containing set
    unordered_set<int> uniqueElement(arr1.begin(), arr1.end());

    // create a set consists of common elements
    unordered_set<int> commonElements;

    // check element count if greater than 0 than consider the element as common
    for(auto num : arr2) {

        if(uniqueElement.count(num) > 0) {

            commonElements.insert(num);

        }
    }

    vector<int> result(commonElements.begin(), commonElements.end());

    return result;

}
int main() {

    vector<int> arr1{1, 2, 3, 4 , 5};
    vector<int> arr2{1, 2, 4, 8, 9};

    vector<int> result = intersectionArray(arr1, arr2);

    for(auto num : result) {

        cout << num << " ";

    }

    return 0;
}