#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int>nums = {17,13,11,2,3,5,7};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int>ans(n, 0);
    queue<int>q;

    for(int i = 0; i < n; i++) {
        q.push(i);
    }

    for(int i = 0; i < n; i++) {
        int currIdx = q.front();
        q.pop();
        ans[currIdx] = nums[i];
        if(!q.empty()) {
            q.push(q.front());
            q.pop();
        }
    }

    for(auto &i : ans) {
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}