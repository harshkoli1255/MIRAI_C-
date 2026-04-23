#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>singleNumberIII(vector<int>nums, int n) {
    unordered_map<int, int>m;

    vector<int>ans;
    for(int i = 0; i < nums.size(); i++) {
        if(m.find(nums[i]) == m.end()) {
            m[nums[i]] = 0;
        }
        m[nums[i]]++;
    }

    for(auto it = m.begin(); it!= m.end(); it++) {
        if(it -> second == 1) {
            ans.push_back(it->first);
        }
    }
    return ans;

}

int main(){

    // vector<int>nums = {1, 2, 1, 3, 2, 5};
    vector<int>nums = {-1, 0};
    int n = nums.size();

    vector<int>result = singleNumberIII(nums, n);

    for(auto &i : result) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}