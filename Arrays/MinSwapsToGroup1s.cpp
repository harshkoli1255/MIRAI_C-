#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
    vector<int>nums = {0, 1, 0, 1, 1, 0, 0};
    int n = nums.size();
    int count = 0;
    int maxCount = 0;
    int totalOnes = accumulate(nums.begin(), nums.end(), 0);
    int i = 0;
    int j = 0; 
    while(j < n) {
        if(nums[j] == 1) {
            count++;
        }
        if(j-i+1 == totalOnes) {
            maxCount = max(maxCount, count);
            if(nums[i] == 1) {
                count--;
            }
            i++;
        }
        j++;
    }
    cout<<totalOnes-maxCount<<endl;
    return 0;
}

