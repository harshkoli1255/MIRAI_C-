#include<iostream>
#include<vector>
using namespace std;
    
vector<int> solve(vector<int>& nums, int n) {
    if(nums.empty()) return {};
    vector<int> ans(n);
    ans[0] = nums[0];
    int j = 0;

    for (int i = 1; i < n; i++) {
        if (nums[i] != ans[j]) {
            j++;
            ans[j] = nums[i];
        }
    }
    ans.resize(j+1);
    return ans;
}
int main(){
    vector<int>nums = {1, 2, 2, 3, 4, 4, 4, 5, 5};

    int n = nums.size();

    vector<int>ans = solve(nums, n);

    for(auto &i : ans) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}