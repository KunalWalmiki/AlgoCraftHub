#include<iostream>
using namespace std;

bool checkPalindrome(int l, int h, string str) {

    // base case 
    if(l >= str.size() / 2) return true;

    if(str[l] != str[h]) return false;

    checkPalindrome(l+1, h-1, str);

}
int main() {

    string str;
    cout << "Enter String" << endl;
    cin >> str;

    if(checkPalindrome(0,str.size() - 1 ,str)) 
        cout << "Given String is Palindrome" << endl;
    else 
        cout << "Given String is not a Palindrome" << endl;    


    return 0;
}