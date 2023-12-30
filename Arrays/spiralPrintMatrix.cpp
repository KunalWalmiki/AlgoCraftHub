#include<iostream>
#include<vector>
using namespace std;
// void spiralPrint(int arr[][3], int n, int m) {

//     int totalElements = m * n;
//     int startCol = 0, startRow = 0, endCol = m - 1, endRow = n - 1;
//     int count = 0;

//     while(count < totalElements) {

//         // print first row
//         for(int i = startCol; i <= endCol && count < totalElements; i++) {

//             cout << arr[startRow][i] << " ";
//             count++;
//         }
//         startRow++;

//         // Print last Column
//         for(int i = startRow; i <= endRow && count < totalElements; i++) {

//             cout << arr[i][endCol] << " ";
//             count++;
//         } 
//         endCol--;

//         // Print last Row
//         for(int i = endCol; i >= startCol && count < totalElements; i--) {

//             cout << arr[endRow][i] << " ";
//             count++;
//         }
//         endRow--;
//     }
// }

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
         int N = matrix.size();
         int M = matrix[0].size();
         int totalElements = N * M;
         int count = 0;
         int startingCol = 0, startingRow = 0, endingCol = M - 1, endingRow = N - 1; 

         while(count < totalElements) {

            //Print Row
            for(int i = startingCol; i <= endingCol && count < totalElements; i++) {

                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;

            // Print Ending Col
            for(int i = startingRow; i <= endingRow && count < totalElements; i++) {
                
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // Print Ending Row
            for(int i = endingCol; i>=startingCol && count < totalElements; i--) {

                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // Print first Col
            for(int i = endingRow; i >= startingRow && count < totalElements; i--) {

                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;

         }

         return ans;

    }

int main() {

    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3;
    int m = 3;
    // spiralPrint(arr, n, m);

    vector<vector<int>> matrix{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    vector<int> ans = spiralOrder(matrix);

    for(auto num : ans) {

        cout << num << " ";
        
    }

    return 0;
}