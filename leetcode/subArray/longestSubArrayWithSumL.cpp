#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int longestSubarray(vector<int>&arr, int k) {
    int n = arr.size();
    int sum = 0;
    int ans = 0;
    
    unordered_map<int, int>m;
    
    for(int i = 0; i < n; i++) {
        sum+=arr[i];
        
        if(sum == k) ans = max(ans, i+1);
        
        if(m.find(sum-k) != m.end()) ans = max(ans, i - m[sum-k]);
        if(m.find(sum) == m.end()) m[sum] = i;
    }
    return ans;
}
int main(){
    vector<int>arr = {1, 2, 1, 0, 1};
    int k = 4;
    cout<<longestSubarray(arr, k)<<endl;
    return 0;
}