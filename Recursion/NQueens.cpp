#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<string>&board, int row, int col, int n) {
    // vartical
    for(int i = row-1; i >= 0; i--) {
        if(board[i][col] == 'Q') return false;
    }
    // diagonal left up
    for(int i = row-1, j = col-1; i >= 0 && j >=0; i--, j--) {
        if(board[i][j] == 'Q') return false;
    }
    // diagonal right up
    for(int i = row-1, j = col+1; i >= 0 && j < n; i--, j++) {
        if(board[i][j] == 'Q') return false;
    }
    return true;
}

void NQeens(vector<string>&board, vector<vector<string>>&ans, int n, int i) {
    if(i == n) {
        ans.push_back(board);
        return;
    }
    for(int j = 0; j < n; j++) {
        if(isValid(board, i, j, n)) {
            board[i][j] = 'Q';
            NQeens(board, ans, n, i+1);
            board[i][j] = '.';
        }
    }
}

int main(){
    int n = 4;
    vector<string>board(n, string(n, '.'));
    vector<vector<string>>ans;
    NQeens(board, ans, n, 0);
    // cout<<ans.size()<<endl;
    
    for(auto &row : ans) {
        for(auto &cell : row) {
            for(auto &ele : cell) {
                cout<<ele<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
