#include<iostream>
#include<vector>
#include<unordered_set> //it is a data structure which stores only distinct values
using namespace std;
vector<int> unionArrays(vector<int> arr1, vector<int> arr2) {

    unordered_set<int> uniqueArray;

    for(auto num : arr2) {
        uniqueArray.insert(num);
    }

    for(auto num : arr1) {
         uniqueArray.insert(num);
    }

    vector<int> result(uniqueArray.begin(), uniqueArray.end());

    return result;
    
}
int main() {

    vector<int> arr1{1, 2, 3, 4, 5};
    vector<int> arr2{5, 6, 7, 8, 4};

    vector<int> result = unionArrays(arr1, arr2);

    for(auto num : result) {

        cout << num << " ";

    } 

    return 0;

}