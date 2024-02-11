#include<iostream>
#include<algorithm>
using namespace std;
    string calc_Sum(int a[],int b[],int n,int m){
    // Complete the function
    
    string ans ="";
    
       int i = n-1;
       int j = m-1;
       int carry = 0;
       
    // if both array have same size  
       while(i >= 0 && j>=0) {
           
           int x = a[i] + b[j] + carry;
           
           int digit = x % 10;
           
           carry = x / 10;
         
           ans.push_back(digit + '0');
           
           i--;
           j--;
       }
       
    //   if first array have greater size 
    
    while(i>=0) {
        
        int x = a[i] + 0 + carry;
        
        int digit = x % 10;
        
        carry = x / 10;
        
        ans.push_back(digit + '0');
        
        i--;
        
    }
    
    // if second array is greater 
    while(j >= 0) {
        
        int x = 0 + b[j] + carry;
        
        int digit = x % 10;
        
        carry = x / 10;
        
        ans.push_back(digit + '0');
        
        j--;
    }
    
    
    // if carry have extra values
    while(carry) {
        
        int digit = carry % 10;
        carry = carry / 10;
        
        ans.push_back(digit + '0');
        
    }
    
    // make sure if answer containing zero's in front
    while(ans[ans.size() - 1] == '0') 
         ans.pop_back();
    
    //reverse the answer
    reverse(ans.begin(), ans.end());
    
    return ans;
    
    }
int main() {

    int a[] = {9, 5, 4, 9};
    int b[] = {2, 1, 4};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);

    string ans = calc_Sum(a, b, n, m);

    cout << ans;

    return 0;
}