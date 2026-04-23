#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void permutationII(vector<int>&nums, int n, vector<vector<int>>&ans, int idx) {
    if(idx == n) {
        ans.push_back(nums);
        return;
    }
    unordered_set<int>uniqueSet;

    for(int i = idx; i < n; i++) {
        if(uniqueSet.find(nums[i]) != uniqueSet.end()) {
            continue;
        }

        uniqueSet.insert(nums[i]);
        swap(nums[i], nums[idx]);
        permutationII(nums, n, ans, idx+1);
        swap(nums[i], nums[idx]);
    }
}
int main(){
    vector<int>nums = {1,1,2};
    int n = nums.size();
    vector<vector<int>>ans;

    permutationII(nums, n, ans, 0);

    for(auto &row : ans) {
        for(auto &ele : row) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}