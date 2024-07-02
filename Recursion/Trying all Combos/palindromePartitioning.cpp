#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end) {

        while(start <= end) {

            if(s[start++] != s[end--]) return false;

        }

        return true;

}

void doPartition(int index, string s, vector<string> path, vector<vector<string>> &ans) {

        if(index == s.size()) {
            ans.push_back(path);
            return;
        }

        for(int i = index; i <= s.size(); i++) {

            if(isPalindrome(s, index, i)) {

                path.push_back(s.substr(index, i - index + 1));
                doPartition(i + 1, s, path, ans);
                path.pop_back();

            }
        }
}
vector<vector<string>> partition(string s) {
         vector<string> path;
         vector<vector<string>> ans;

         doPartition(0, s, path, ans);

         return ans;

}
int main() {

    string s = "aabb";
    vector<vector<string>> ans = partition(s);

    for(auto row : ans) {

        cout << "[ ";
        for(auto col : row) {
            cout << col << ", ";
        }cout << "]";
        cout<< endl;
    }

    return 0;
}