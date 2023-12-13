#include<iostream>
using namespace std;
bool findEvenOdd(int n) {


    // approach 1 modules 
    //  if(n%2 == 0) 
    //     return true;
    // else 
    //     return false; 

    if((n&1) == 0) 
        return true;
    else 
        return false;    
}
int main() {

    int n;
    cout << " Enter Number" << endl;
    cin>>n;

    bool ans = findEvenOdd(n);

    if(ans) {

        cout << "Given Number is Even" << endl;

    }
    else {

        cout << "Given Number is Odd" << endl;
    }
    return 0;
}