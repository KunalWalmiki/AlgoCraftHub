#include<iostream>
using namespace std;
int findCharOccurCount(char arr[], int size, char ch) {

    int count = 0;
    for(int i = 0; i < size; i++) {

        if(arr[i] == ch) count += 1;

    }

    return count;
}
int main() {

    int n;
    cin>>n;

    char arr[n];
    int size = sizeof(arr) / sizeof(char);

    for(int i = 0; i < size; i++) cin >> arr[i];

    char alpha;
    cout << "Enter Alphabet to find the count " << endl;
    cin>>alpha;

    int count = findCharOccurCount(arr,size,alpha);

    cout << "Given Alphabet Occurence Count " << count << endl; 

    return 0;
}