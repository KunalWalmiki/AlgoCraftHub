#include<iostream>
#include<vector>
using namespace std;
vector<int> findMissingElement(int arr[], int size) {

    // Approach 1 -> negative marking
    // for(int i = 0; i < size; i++) {

    //     int index = abs(arr[i] - 1);

    //     arr[index] *= -1;
    // }

    // for(int i = 0; i < size; i++) {

    //     if(arr[i] > 0) {

    //         return i + 1;

    //     }
    // }

    // return -1;

    // Approach 2 -> swapping + sorting
   vector<int> ans;
   int i = 0;
   while(i < size) {

      int index = arr[i] - 1;

      if(arr[i] != arr[index]) {

         swap(arr[i], arr[index]);

      }
      else {

        i++;
      } 

   }


   for(int i = 0; i < size; i++) {

      if(arr[i] != i + 1) {
          
          ans.push_back(i+1);
      }
   }

   return ans;

}
int main() {

    int arr[] = {1, 3, 3, 3};

    int size = sizeof(arr)/sizeof(int);

    vector<int> ans = findMissingElement(arr, size);

    cout << "Missing Element is : ";

    for(auto nums : ans) {
        cout <<nums << " ";
    }

    return 0;
}