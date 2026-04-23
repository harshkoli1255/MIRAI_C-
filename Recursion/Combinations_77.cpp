#include<iostream>
using namespace std;

void solve(int k, vector<int>&nums, vector<int>&p, vector<vector<int>>&ans, int idx, int n) {
    if(p.size() >= k) {
        ans.push_back(p);
        return;
    }
    for(int i = idx; i < n; i++) {
        p.push_back(nums[i]);
        solve(k, nums, p, ans, i+1, n);
        p.pop_back();
    }
}
int main(){
    int n = 4;
    int k = 2;
    vector<int>nums; // 1 2 3 4
    for(int i = 1; i <= n; i++) {
        nums.push_back(i);
    }
    vector<vector<int>>ans;
    vector<int>p;

    solve(k, nums, p, ans, 0, n);
    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j<<" ";
    }
        cout<<endl;
    }
    return 0;
}