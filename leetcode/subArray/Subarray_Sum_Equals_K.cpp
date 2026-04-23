#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int>prefixSum(n);
    prefixSum[0] = nums[0];
    
    for (int i = 1; i < n; i++) {
        prefixSum[i] = nums[i] + prefixSum[i-1];
    }

    unordered_map<int,int>m; // prefix sum and index
    int count = 0;

    for(int j = 0; j < n; j++) {
        if(prefixSum[j] == k) count++;

        int val = prefixSum[j] - k;

        if(m.find(val) != m.end()) {
            count += m[val];
        }

        m[prefixSum[j]]++;
    }
    return count; 
}
int main(){
    vector<int>nums = {1, 2, 1, 0, 1};
    int k = 0;
    cout<<subarraySum(nums, k)<<endl;

    cout<<(1<<4)<<endl;
    
    return 0;
}