#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<vector<char>>& board, int i, int j, int n, int m, int idx, string &word,vector<int>& di, vector<int>& dj,vector<vector<bool>>& visit) {
    if(idx == word.length()) return true;

    if(i < 0 || j < 0 || i >= n || j >= m || visit[i][j] || board[i][j] != word[idx]) {
        return false;
    }

    visit[i][j] = true;

    for(int it = 0; it < 4; it++) {
        int ni = i + di[it];
        int nj = j + dj[it];

        if(solve(board, ni, nj, n, m, idx+1, word, di, dj, visit)) {
            return true;
        }
    }

    visit[i][j] = false;
    return false;
}

vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {

    int n = board.size(), m = board[0].size();
    vector<string> ans;

    vector<int> di = {1, 0, 0, -1};
    vector<int> dj = {0, -1, 1, 0};

    for(string &word : words) {
    bool found = false;

    for(int i = 0; i < n && !found; i++) {
        for(int j = 0; j < m && !found; j++) {
            if(board[i][j] == word[0]) {
                vector<vector<bool>> visit(n, vector<bool>(m, false));

                if(solve(board, i, j, n, m, 0, word, di, dj, visit)) {
                    ans.push_back(word);
                    found = true;
                }
            }
        }
    }
}
    return ans;
}

int main() {
    vector<vector<char>> board = {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}
    };

    vector<string> words = {"oath","pea","eat","rain"};
    vector<string> ans = findWords(board, words);

    for(auto &w : ans) {
        cout << w << endl;
    }
}