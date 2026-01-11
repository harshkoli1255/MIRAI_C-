#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumCircularSubArraySum(vector<int>nums, int n) {
    int totalSum = 0;
    int currMin = 0;
    int currMax = 0;
    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for(int i = 0; i < n; i++) {
        totalSum += nums[i];
        currMin += nums[i];
        currMax += nums[i];
        
        minSum = min(currMin, minSum);
        maxSum = max(currMax, maxSum);
        
        if(currMax  < 0) {
            currMax = 0;
        }
        if(currMin > 0) {
            currMin = 0;
        }
    }
    if(totalSum-minSum == 0 && maxSum < 0) {
        return maxSum;
    } 
    return max(maxSum, totalSum-minSum);
}

int main() {
    // vector<int>nums = {8, -8, 9, -9, 10, -11, 12};

    // vector<int>nums = {-6, -2, -7, -1, -4, -11};

    vector<int>nums = {6, -2, -7, 1, 4, 11};
    int n = nums.size();
    
    cout<<maximumCircularSubArraySum(nums,n)<<endl;
    return 0;
}