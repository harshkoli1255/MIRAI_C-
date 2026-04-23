#include<iostream>
#include<vector>
using namespace std;

void printAllSubSet(vector<int>&nums, vector<int>&ans, int i) {
    int n = nums.size();
    if(i >= n) {
        for(int j = 0; j < ans.size(); j++) {
            cout<<ans[j]<<" ";
        }
        if(ans.size() == 0) {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(nums[i]);
    printAllSubSet(nums, ans, i+1);
    ans.pop_back();
    printAllSubSet(nums, ans, i+1);
}

int main(){
    vector<int>nums = {1, 2, 2};
    vector<int>ans;
    int n = nums.size();

    printAllSubSet(nums, ans, 0);
    return 0;
}