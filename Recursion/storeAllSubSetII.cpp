#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int>&nums, vector<int>&ans, vector<vector<int>>&allSubset, int i) {
    int n = nums.size();
    if(i >= n) {
        allSubset.push_back({ans});
        return;
    }
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, allSubset, i+1);
    ans.pop_back();
    int idx = i+1; 

    while(idx < n && nums[idx] == nums[idx-1]) {
        idx++;
    }
    getAllSubsets(nums, ans, allSubset, idx);
}

int main(){
    vector<int>nums = {1,2,2,3};
    vector<int>ans;
    vector<vector<int>>allSubset;

    getAllSubsets(nums, ans, allSubset, 0);
    int n = allSubset.size();

    // for(int i = 0; i < n; i++) {
    //     int m = allSubset[i].size();
    //     for(int j = 0; j < m; j++) {
    //         cout<<allSubset[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(auto &row : allSubset) {
        for(auto &ele : row) {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}