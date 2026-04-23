#include<iostream>
#include<set>
using namespace std;

void solve(vector<int>&nums, int target, int n, vector<int>&ds, vector<vector<int>>&ans, int i) {
    if(i == n) {
        if(target == 0) {
            ans.push_back(ds);
        }
        return;
    }
    if(nums[i] <= target) { 
        ds.push_back(nums[i]);
        solve(nums, target - nums[i], n, ds, ans, i+1);
        ds.pop_back();
    }
    
    int idx = i+1;
    while(idx < n && nums[idx] == nums[idx-1]) {
        idx++;
    }
    solve(nums, target, n, ds, ans, idx);
}

int main(){
    vector<int>nums = {10,1,2,7,6,1,5};
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