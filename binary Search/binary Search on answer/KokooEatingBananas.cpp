#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int findMax(vector<int> piles) {

    int maxi = INT16_MIN;

    for(int i = 0; i < piles.size(); i++) {

        maxi = max(maxi, piles[i]);
    }

    return maxi;
}

int calculateHrs(vector<int> piles, int hourly) {

    int totalHrs = 0;

    for(int i = 0; i < piles.size(); i++) {

        totalHrs += ceil((double)(piles[i]) / (double)(hourly));

    }

    return totalHrs;
}
int findMinBananaToEat(vector<int> piles, int h) {

    int maxi = findMax(piles);

    for(int i = 1; i < maxi; i++) {

        int reqTime = calculateHrs(piles, i);

        if(reqTime <= h) {
            return i;
        }
    }

    return maxi;
}

int main() {

    vector<int> piles{30,11,23,4,20};
    int h = 5;
    int minBananaToEat = findMinBananaToEat(piles, h);

    cout << minBananaToEat << endl;

}