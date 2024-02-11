#include<iostream>
#include<map>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int arr[n];
    map<int, int> mpp;

    for(int i = 0; i < n; i++) cin >> arr[i];

    // pre-storing
    for(int i = 0; i < n; i++) mpp[arr[i]]++;

    for(auto it : mpp) {

        cout << it.first << " " << it.second << endl;
    }

    int q;
    cout << " Enter How Many Numbers To be Searched" << endl;
    cin >> q;

    while(q--) {

        int Number;
        cin >> Number;

        cout << "Ocurrence Count of " << Number << " is : " <<mpp[Number];

    }
    
    return 0;
}