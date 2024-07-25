#include<iostream>
#include<vector>
using namespace std;

int main() {

    int N = 36;
    vector<int> ans;

    // for(int i = 1; i <= N; i++) {

    //     if(N % i == 0) {
    //         ans.push_back(i);
    //     }
    // }

    for(int i = 1; i*i<=N; i++) {

        if(N % i == 0) {
            ans.push_back(i);

            if(N / i != i) {
                ans.push_back(N/i);
            }
        }
    }

    for(auto num :ans) cout << num << " ";

    return 0;
}