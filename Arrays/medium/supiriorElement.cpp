#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.

    // vector<int> ans;

    // for(int i = 0; i < a.size();i++) {

    //     bool superiorElements = true;

    //     for(int j = i + 1; j < a.size(); j++) {

    //          if(a[i] <= a[j]) {
    //              superiorElements = false;
    //              break;
    //          }
    //     }

    //     if(superiorElements == true) {
    //         ans.push_back(a[i]);
    //     }
    // }

    // sort(ans.begin(), ans.end());

    // return ans;

   vector<int> ans;

   int superiorElement = a[a.size() - 1];
   ans.push_back(a[a.size() - 1]);

   for(int i = a.size() - 2; i >= 0; i--) {

       if(a[i] > superiorElement) {

           superiorElement = max(superiorElement, a[i]);
           ans.push_back(a[i]);

       }
   } 

   return ans;
    
}

int main() {

    vector<int> nums{1, 2, 3, 2};

    vector<int> ans = superiorElements(nums);

    for(auto num : ans) {

        cout << num << " ";

    }
    
    return 0;
}