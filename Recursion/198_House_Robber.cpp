#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&nums, int i, int n, int& ans, int& maxAns) {
    if(i >= n) {
        maxAns = max(ans, maxAns);
        return;
    }
    ans += nums[i];
    solve(nums, i+2, n, ans, maxAns);
    ans -= nums[i];
    solve(nums, i+1, n, ans, maxAns);
}

int main(){
    vector<int>nums= {1,2,3,5};
    int n = nums.size();
    int ans = 0;
    int maxAns = 0;
    solve(nums, 0, n, ans, maxAns);
    cout<<maxAns<<endl;
    return 0;
}
