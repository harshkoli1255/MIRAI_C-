#include<iostream>
#include<unordered_set>
using namespace std;
bool solve(vector<int>&nums, int k, int n, vector<int>&ds, int target, int i, vector<vector<int>>&ans, vector<bool>&visit) {
    
}
int main(){

    vector<int>nums = {4, 3, 2, 3, 5, 2, 1};
    // 1 2 2 3 3 4 5
    sort(nums.begin(), nums.end());
    int k = 4;
    int n = nums.size();
    vector<int>ds;
    vector<vector<int>>ans;
    vector<bool>visit(n, false);
    int sum = 0;

    for(auto &i : nums) {
        sum+= i;
    }
    if(sum%k != 0) {
        cout<<"false"<<endl;
    }
    solve(nums, k, n, ds, sum/k, 0, ans, visit);

    for(auto &i : ans) {
        for(auto &j : i) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}