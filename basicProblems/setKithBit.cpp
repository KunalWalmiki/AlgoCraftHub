//GFG
#include<iostream>
using namespace std;
int setKithBit(int N, int K) {

    int mask = 1<<K;

    int ans = N | mask;

    return ans;
    
}
int main() {

    int N = 10;
    int K = 2;

    int ans = setKithBit(N, K);

    cout << "Ans is : " << ans << endl;

}
