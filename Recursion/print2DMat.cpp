#include<iostream>
using namespace std;

void printMat(vector<vector<int>>&nums, vector<vector<int>>&ans, int i,int j) {
    if(i == nums.size()) {
        return;
    }
    if(j == nums[i].size()) {
        printMat(nums, ans, i+1, 0);
        return;
    }
    ans[i][j] = nums[i][j];
    printMat(nums, ans, i, j+1);
}
int main(){
    vector<vector<int>>nums = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> ans(nums.size(), vector<int>(nums[0].size()));
    printMat(nums, ans, 0, 0);

    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}