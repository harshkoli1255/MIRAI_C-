#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>>&board, int n, int row, int col) {   
    if(row >= 0 && row < n && col >=0 && col < n && board[row][col] == 0) {
        return true;
    }
    return false;
}

bool solve(vector<vector<int>>&board, int n, vector<int>&di, vector<int>&dj, int step, int i, int j) {
    if(step == n*n+1) {
        return true;
    }

    for(int idx = 0; idx < 8; idx++) {
        int nexti = i + di[idx];
        int nextj = j + dj[idx];
        if(isSafe(board, n, nexti, nextj)) {
            board[nexti][nextj] = step;
            if(solve(board, n, di, dj, step+1, nexti, nextj)) {
                return true;
            }
            board[nexti][nextj] = 0;
        }
    }
    return false;
}

int main(){
    int n = 5;
    vector<vector<int>>board(n, vector<int>(n, 0));
    
    vector<int> di = {-2, -1, -2, -1, 1, 2,  2,  1};
    vector<int> dj = {1,   2, -1, -2, 2, 1, -1, -2};
    board[0][0] = 1;

    if(solve(board, n, di, dj, 2, 0, 0)) {
        for(auto &i : board) {
            for(auto &j : i) {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    else {
        cout<<"NO Solution"<<endl;
    }
    
    return 0;
}