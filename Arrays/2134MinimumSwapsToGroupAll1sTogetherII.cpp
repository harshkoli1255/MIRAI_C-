#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector<int>nums = {0,1,0,1,1,0,0};
    int n = nums.size();
    int totalOnes = accumulate(nums.begin(), nums.end(), 0);
    int count = 0;
    int maxCount = 0;

    int i = 0;
    int j = 0;

    while(j < 2*n) {
        if(nums[j%n] == 1) {
            count++;
        }
        if(j - i + 1 == totalOnes) {
            if(nums[i%n] == 1) {
                maxCount = max(maxCount, count);
                count--;
            }
            i++;
        }
        j++;
    }
    cout<<totalOnes-maxCount<<endl;
    return 0;
}