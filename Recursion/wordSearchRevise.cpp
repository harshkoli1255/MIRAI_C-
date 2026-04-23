#include<iostream>
using namespace std;


bool isSafe(vector<vector<char>>&board, int row, int col, vector<vector<bool>>&visit, int n, int m, int idx, string word) {
    if(row >=0 && col >=0 && row < n && col < m && !visit[row][col] && word[idx] == board[row][col]) {
        return true;
    }
    return false;
} 

bool solve( vector<vector<char>>&board, int n, int m, string word, int idx,  vector<int>&di,  vector<int>&dj, int i, int j, vector<vector<bool>>&visit) {
    if(idx >= word.length()) {
        return true;
    }
    for(int it = 0; it < 4; it++) {
        int nexti = i + di[it];
        int nextj = j + dj[it];
        if(isSafe(board, nexti, nextj, visit, n, m, idx, word)) {
            visit[nexti][nextj] = true;
            if(solve(board, n, m, word, idx+1, di, dj, nexti, nextj, visit)) {
                return true;
            }
            visit[nexti][nextj] = false;
        }
    }
    return false;
}
int main(){
    vector<vector<char>>board = {{'A','B','C','E'}, {'S', 'F','C','S'}, {'A', 'D', 'E', 'E'}};
    int n = board.size();
    int m = board[0].size();
    vector<vector<bool>>visit(n, vector<bool>(m, false));
    string word = "ABCB";
    int wordLen = word.length();

    vector<int>di = {1, 0, 0, -1};
    vector<int>dj = {0, -1, 1, 0};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == word[0]) {
                visit[i][j] = true;
                if(solve(board, n, m, word, 1, di, dj, i, j, visit)) {
                    cout<<"true"<<endl;
                    return 0;
                }
                visit[i][j] = false;
            }
        }
    }
    cout<<"false"<<endl;
    return 0;
}