#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {3, -4, 5, 4, -1, 7, -8};
    int n = nums.size();

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for(int end = st; end < n; end++) {
            currSum += nums[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout<<maxSum<<endl;
    
    return 0;
}