#include<iostream>
using namespace std;

void solve(vector<vector<int>>&mat, vector<int>&di, vector<int>&dj, int n, int m, int row, int col ,int &ans, int &maxAns, vector<vector<bool>>&visit) {
    ans += mat[row][col];
    visit[row][col] = true;
    maxAns = max(ans, maxAns);

    for(int idx = 0; idx < 4; idx++) {
        int nexti = row + di[idx];
        int nextj = col + dj[idx];
        if(nexti >= 0 && nexti < n && nextj >= 0 && nextj < m && visit[nexti][nextj] == false && mat[nexti][nextj] != 0) {
            solve(mat, di, dj, n, m, nexti, nextj, ans, maxAns, visit);
        }
    }
    ans -= mat[row][col];
    visit[row][col] = false;
    return;
}

int main(){
    vector<vector<int>>mat = {{1,0,7}, {2,0,6}, {3,4,5}, {0,3,0}, {9,0,20}};
    int n = mat.size();
    int m = mat[0].size();
    int maxAns = 0;
    vector<int>di = {1, 0, 0, -1};
    vector<int>dj = {0, -1, 1, 0};
    int ans = 0;
    vector<vector<bool>>visit(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] != 0) {
                solve(mat, di, dj, n, m, i, j, ans, maxAns, visit);
            }
        }
    }
    cout<<maxAns<<endl;
    return 0;
}