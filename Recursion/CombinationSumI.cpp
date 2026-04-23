#include<iostream>
using namespace std;

void solve(vector<int>&nums, int target, vector<vector<int>>&ans, vector<int>&ds, int i, int n) {
    if(i == n) {
        if(target == 0) {
            ans.push_back(ds);
        }
        return;
    }
    if(nums[i] <= target) {
        ds.push_back(nums[i]);
        solve(nums, target - nums[i], ans, ds, i, n);
        ds.pop_back();
    }
    solve(nums, target, ans, ds, i+1, n);
}
int main(){
    vector<int>nums = {2, 3, 6, 7};
    int n = nums.size();
    int target = 7;

    vector<vector<int>>ans;
    vector<int>ds;

    solve(nums, target, ans, ds, 0, n);
    for(auto &row : ans) {
        for(auto &ele : row) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}