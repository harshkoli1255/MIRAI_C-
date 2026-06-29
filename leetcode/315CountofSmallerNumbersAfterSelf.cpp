#include<iostream>
#include<vector>
using namespace std;

vector<int> getAnswer(vector<int>&nums, int n) {
    vector<int>ans;
    if(n == 1) {
        return {0};
    }
    int i = 0;
    
    while(i < n-1) {
        int count = 0;
        int j = i+1;

        while(j < n) {
            if(nums[j] < nums[i]) {
                count++;
            }
            j++;
        }
        ans.push_back(count);
        i++;
    }
    ans.push_back(0);
    return ans;
}

int main(){
    vector<int>nums = {5, 2, 6, 1};
    int n = nums.size();

    vector<int>ans = getAnswer(nums, n);

    for(auto &i : ans) {
        cout<<i<<" "; 
    }
    cout<<endl;
    return 0;
}