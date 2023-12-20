#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    unordered_map<int, int> map;

    map[1] = 1;
    map[2] = 2;
    map[3] = 3;

    cout << " value of corresponding 2 is : " << map[2] << endl;

    for(auto num : map) {

        cout << num.first << num.second << " ";
    }cout << endl;
    
    return 0;
}