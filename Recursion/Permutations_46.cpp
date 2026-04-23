#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>&nums, vector<int>&p, vector<vector<int>>&ans, int n, vector<bool>&taken) {
    if(p.size() == n) {
        ans.emplace_back(p);
        return;
    }
    for(int i = 0; i < n; i++) {
        if(!taken[i]) {
            p.push_back(nums[i]);
            taken[i] = true;
            permutation(nums, p, ans,n,taken);
            taken[i] = false;
            p.pop_back();
        }
    }
}

int main(){
    vector<int>nums = {1, 1, 2};
    int n = nums.size();
    vector<vector<int>>ans;
    vector<int>p;
    vector<bool>taken(n, false);
    permutation(nums, p, ans, n, taken);

    for(auto &i : ans) {
        for(auto &ele : i) {
            cout<<ele <<" ";
        }
        cout<<endl;
    }

    return 0;
}