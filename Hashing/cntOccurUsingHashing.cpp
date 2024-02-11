#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int hash[n + 1] = {0};
    // prestoring
    for(int i = 0; i < n; i++) {

        hash[arr[i]] += 1;

    }


    int q;
    cin>>q;

    while(q--) {

        int Number;
        cin>>Number;

        // fetching
        cout <<"Number Of Times Occured " << hash[Number] << endl;

    }

    return 0;
}