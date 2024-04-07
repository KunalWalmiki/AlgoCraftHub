#include<iostream>
#include<vector>
using namespace std;
bool possible(vector<int> bloomDay, int m, int k, int day) {

    int count = 0, noOfB = 0;

    for(int i = 0; i < bloomDay.size(); i++) {

        if(bloomDay[i] <= day) {

            count++;
        
        } else {

            noOfB += count/k;
            count = 0;

        }
    }

        noOfB += count/k ;
        if(noOfB >= m) return true;

        else return false;
}
int findMinDayToBloom(vector<int> bloomDay, int m, int k) {

    int maxi = INT16_MIN, mini = INT16_MAX;

    for(int i = 0; i < bloomDay.size(); i++) maxi = max(maxi, bloomDay[i]);

    for(int i = 0; i < bloomDay.size(); i++) mini = min(mini, bloomDay[i]);

    // Brute Force approach -> Linear search
    // for(int i = mini; i <= maxi; i++) {

    //     if(possible(bloomDay, m, k, i)) {

    //         return i;

    //     }

    // }

    // Optimal approach -> Binary Search
    int low = mini;
    int high = maxi;
    int ans = -1;
    while(low <= high) {

       int mid = low + (high - low) / 2;

       if(possible(bloomDay, m, k, mid)) {
             
             ans = mid;
             high = mid - 1;
       }
       else low = mid + 1;

    }

    return ans;
}
int main() {

    vector<int> bloomDay{1, 10, 4, 10, 2};
    int k = 1;
    int m = 3;

    int minDay = findMinDayToBloom(bloomDay, m, k);

    cout << minDay << endl;

    return 0;
}