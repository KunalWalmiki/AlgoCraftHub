#include <bits/stdc++.h>
using namespace std;

int findReqDay(vector<int> weights, int cap) {

    int day = 1, load = 0;

    for(int i = 0; i < weights.size(); i++) {

        if(load + weights[i] > cap) {

            day = day + 1;
            load = weights[i];
        
        } else {

            load += weights[i];
        }
    }

    return day;
}
int shipWithInDays(vector<int> weights, int days) {

    //  int max = *max_element(weights.begin(), weights.end());
    //  int sum  =   accumulate(weights.begin(), weights.end(), 0);

    //  for(int cap = max; cap <= sum; cap++) {

    //       int reqDay = findReqDay(weights, cap);

    //       if(reqDay <= days) {
             
    //          return cap;

    //       }
    //  }

    int low  = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    int mid = low + (high - low) / 2;
    int ans = -1;
    while(low <= high) {

        if(findReqDay(weights, mid) <= days) {

            ans = mid;
            high = mid - 1;
        
        } else {

            low = mid + 1;
        }

        mid = low + (high - low) / 2;
    }

    return ans;

}
int main() {

    vector<int> weights{1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    int ans = shipWithInDays(weights, days);

    cout << ans << endl;

    return 0;
}