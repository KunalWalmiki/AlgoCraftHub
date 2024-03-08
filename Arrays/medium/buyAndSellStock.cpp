#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
        
        // int minPriceToBuy = prices[0];
        // int minIndex = 0;
        
        // for(int i = 1; i < prices.size(); i++) {

        //     if(prices[i] < minPriceToBuy) {
        //         minPriceToBuy = prices[i];
        //         minIndex = i;
        //     }
        // }

        // int maxProfit = prices[minIndex];

        // for(int i = minIndex; i <= prices.size() - 1; i++) {

        //     if(maxProfit < prices[i]) {
        //         maxProfit = prices[i];
        //     }
        // }

        // return maxProfit - prices[minIndex];

        int mini = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {

            int profit = prices[i] - mini;

            maxProfit = max(profit, maxProfit);

            mini = min(mini, prices[i]);

        }

        return maxProfit;
}

int main() {

    vector<int> prices{7, 1, 5, 3, 6, 4};

    int ans = maxProfit(prices);

    cout << ans;
    
    return 0;
}


