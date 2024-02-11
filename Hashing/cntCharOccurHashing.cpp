#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    char arr[n];
    int hash[26] = {0};
    int size = sizeof(arr) / sizeof(char);

    for(int i = 0; i < size; i++) cin>>arr[i];

    // pre-storing
    for(int i = 0; i < size; i++) hash[arr[i] - 'a'] += 1;

    int q;
    cout << "Enter Number of Alphbet to be searched " << endl;
    cin >> q;

    while(q--) {

        char alpha;
        cout << "Enter Alpha" << endl;
        cin >> alpha;

        cout << "Alphabet Count of " << alpha  << " is : " << hash[alpha - 'a'] << endl;

    } 
    return 0;

}