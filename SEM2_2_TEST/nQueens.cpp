#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int n, int row, int col, vector<string>&board) {
    // check is the current cell is damaged    
    if(board[row][col] =='X') {
        return false;
    }
    
    // vertical Check
    for(int i = row-1; i >= 0; i--) {
        if(board[i][col] == 'Q') {
            return false;
        } 
    }

    // upper diagonal left
    
    for(int i = row-1, j = col-1; i>=0 && j >=0; i--,j--) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }
    
    // upper diagonal right
    for(int i = row-1, j = col+1; i>=0 && j < n; i--, j++) {
        if(board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

void nQueens(int n, int i, vector<string>&board, vector<vector<string>>&ans) {
    if(i >= n) {
        ans.push_back(board);
        return;
    }

    for(int j = 0; j < n; j++) {
        if(isSafe(n, i, j, board)) {
            board[i][j] = 'Q';
            nQueens(n, i+1, board, ans);
            board[i][j] = '.';
        }
    }
}

int main(){
    int n = 5;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>>ans;

    vector<int>di = {1, 1, 4, 4, 0};
    vector<int>dj = {1, 2, 2, 1, 1};n

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i == di[0] && j==dj[0]) || (i == di[1] && j==dj[1]) || (i == di[2] && j==dj[2]) || (i == di[3] && j==dj[3]) || (i == di[4] && j==dj[4])) {
                board[i][j] = 'X';
            }
        }
    }

    nQueens(n, 0, board, ans);
    
    for(auto &i : ans) {
        for(auto &j : i) {
            for(auto &k : j) {
                cout<<k<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}