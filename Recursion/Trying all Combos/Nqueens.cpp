#include<bits/stdc++.h>
using namespace std;

class Nqueen {

    public :
    bool isSafe(int col, int row, vector<string> board, int N) {

        int i = row;
        int j = col;

        // check left diagonal
        while(i >= 0 && j >= 0) {

            if(board[i][j] == 'Q') return false;
            i--;
            j--;
        }

        // check left row
        i = row;
        j = col;
        while(j >= 0) {
            if(board[i][j] == 'Q') return false;
            j--;
        }

        // check lower left diagonal
        i = row;
        j = col;

        while(i < N && j >= 0) {

            if(board[i][j] == 'Q') return false;
            j--;
            i++;
        }

        return true;
    }

    void placeNqueen(int col, vector<vector<string>> &ans, vector<string> &board, int N,
    vector<int> &leftRow, vector<int> &leftLowerDiagonal, vector<int> &leftUpperDiagonal) {

        if(col == N) {

            ans.push_back(board);
            return;

        }

        // for(int row = 0; row < N; row++) {

        //     if(isSafe(col, row, board, N)) {

        //         board[row][col] = 'Q';
        //         placeNqueen(col+1, ans, board, N);
        //         board[row][col] = '.';
        //     }
        // }

        // optimised 
        for(int row = 0; row < N; row++) {

            if(leftRow[row] == 0 && leftLowerDiagonal[row + col] == 0 
            && leftUpperDiagonal[N - 1 + col - row] == 0) {

                board[row][col] = 'Q';
                leftRow[row] = 1;
                leftLowerDiagonal[row + col] = 1;
                leftUpperDiagonal[N - 1 + col - row] = 1;
                // recursive call
                placeNqueen(col+1, ans, board, N, leftRow, leftLowerDiagonal, leftUpperDiagonal);
                // backtrack
                board[row][col] = '.';
                leftRow[row] = 0;
                leftLowerDiagonal[row + col] = 0;
                leftUpperDiagonal[N - 1 + col - row] = 0;

            }
        }
    }
    vector<vector<string>> NQueen(int N){
         vector<vector<string>> ans;
         vector<string> board(N);
         string s(N, '.');
         vector<int> leftRow(N, 0), leftLowerDiagonal(2*N-1,0), leftUpperDiagonal(2*N-1, 0);

         for(int i = 0; i < N; i++) {
            board[i] = s;
         } 

         placeNqueen(0, ans, board, N, leftRow, leftLowerDiagonal, leftUpperDiagonal);

         return ans;
    }
};

int main() {

    int N = 4;
    Nqueen n;
    vector<vector<string>> ans = n.NQueen(N);

    for(auto row : ans) {
        cout << "[ ";
        for(auto col : row) {
            cout << col << " ";

        }cout << " ]";
        cout << endl;
    }

    return 0;
}