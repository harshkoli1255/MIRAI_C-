#include<iostream>
using namespace std;

bool solve(vector<vector<char>>&board, int n, int m, vector<vector<bool>>&visit, int idx, string word, int i, int j, vector<int>&di, vector<int>&dj) {
    if(idx == word.length()) {
        return true;
    }
    if(i < 0 || j < 0 || i >= n || j >= m || visit[i][j] || board[i][j] != word[idx]) {
        return false;
    }

    visit[i][j] = true;
    for(int it = 0; it < 4; it++) {
        int next_i = i + di[it];
        int next_j = j + dj[it];
        if(solve(board, n, m , visit, idx+1 ,word, next_i, next_j, di, dj)) {
            return true;
        }
    }
    visit[i][j] = false;
    
    return false;
}

int main(){
    vector<vector<char>>board = {{'A','B','C','E'}, 
                                 {'S','F','C','S'}, 
                                 {'A','D','E','E'}};

    string word = "SEE";
    int n = board.size();
    int m = board[0].size();
    vector<vector<bool>>visit(n, vector<bool>(m , 0));
    // D L R U
    vector<int>di = {1, 0, 0, -1};
    vector<int>dj = {0, -1, 1, 0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == word[0] && solve(board, n, m, visit, 0, word, i, j, di, dj)) {
                cout<<"true"<<endl;
                return 0;
            }
        }
    }
    return 0;
}