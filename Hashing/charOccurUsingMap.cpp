#include<bits/stdc++.h>
#include<map>
using namespace std;

int main() {

    int n;
    cin >> n;

    char arr[n];
    map<char,int> mpp;

    for(int i = 0; i < n; i++) cin >> arr[i];


    // pre-storing
    for(int i = 0; i < n; i++)  mpp[arr[i]]++;


    for(auto it : mpp) {

        cout << it.first << " " << it.second << endl;
    }

    int q;
    cout << " Enter Number of Alphabet to be searched" << endl;
    cin >> q;

    while(q--) {
        
        char Alpha;
        cout << " Enter Alpha " << endl;
        cin >> Alpha;

        cout << mpp[Alpha] << endl;

    }


    return 0;
}