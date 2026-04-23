#include<iostream>
#include<set>
using namespace std;

void solve(vector<int>&nums, int target, int n, vector<int>&ds, vector<vector<int>>&ans, int idx) {
    if(target == 0) {
        ans.push_back(ds);
        return;
    }
    for(int i=idx; i<nums.size(); i++) {
        if(i>idx && nums[i] == nums[i-1]) continue;
        if(nums[i] > target) return;
        ds.push_back(nums[i]);
        solve(nums, target - nums[i], n, ds, ans, i+1);
        ds.pop_back();
    }
}
int main(){
    vector<int>nums = {10, 1, 2, 7, 6, 1, 5};
                    //  1  1  2  5  6  7  10
    sort(nums.begin(), nums.end());

    int target = 8;
    int n = nums.size();
    vector<int>ds;
    vector<vector<int>>ans;

    solve(nums, target, n, ds, ans, 0);
    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}