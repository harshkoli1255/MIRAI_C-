#include <iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>&nums, vector<vector<string>>&result, int n, string ds, int i,  int j, vector<vector<int>>&visit, int m) {
    if(i == n-1 && j == m-1) {
        result.push_back({ds});
        return;
    }
    visit[i][j] = 1;
    // right
    if(j+1 < m && !visit[i][j+1]) {
        visit[i][j+1] = 1;
        solve(nums, result, n, ds + 'R', i, j+1, visit, m);
        visit[i][j+1] = 0;
    }

    // down
    if(i+1 < n && !visit[i+1][j]) {
        visit[i+1][j] = 1;
        solve(nums, result, n, ds + 'D', i+1, j, visit, m);
        visit[i+1][j] = 0;
    }
    visit[i][j] = 0;
}
int main() {
    vector<vector<int>>nums = {{1,2,3}, {4,5,6}, {7,8,9}};
    int n = nums.size();
    int m = nums[0].size();
    vector<vector<int>>visit(n, vector<int>(n, 0));
    vector<vector<string>>result;
    solve(nums, result, n, "", 0, 0, visit, m);
    
    for(auto &i : result) {
        for(auto &j : i) {
            for(auto &k : j) {
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}