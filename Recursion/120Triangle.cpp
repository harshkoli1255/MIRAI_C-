#include<iostream>
using namespace std;

void solve(vector<vector<int>>&mat, int& ans,int i, int j, int n, vector<int>&di,  vector<int>&dj, int temp) {
    if(j >= mat[i].size()) return;
    if(i == n-1) {
        temp+= mat[i][j];
        ans = min(ans, temp);
        return;
    }
    for(int idx = 0; idx < 2; idx++) {
        int nexti = i + di[idx];
        int nextj = j + dj[idx];
        solve(mat, ans, nexti, nextj, n, di, dj, temp+mat[i][j]);
    }
}
int main(){
    vector<vector<int>>mat = {{3}, {3,1}, {5,1,7,2}};
    int n = mat.size();
    int ans = INT_MAX;
    vector<int>di = {1, 1};
    vector<int>dj = {0, 1};

    solve(mat, ans, 0, 0, n, di, dj, 0);
    cout<<ans<<endl;
    return 0;
}

// 3
// 3 1
// 5 1 7
// 4 1 8 2