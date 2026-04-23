#include<iostream>
using namespace std;
vector<int> PlusOne(vector<int>&nums, int n) {
    if(n==1) {
        if(nums[0] < 9) {
            nums[0]++;
            return nums;
        }
        else if(nums[0] ==9){
            nums[0] = 0;
            nums.insert(nums.begin(), 1);
            return nums;
        }
    }
    else if(nums[n-1] < 9) {
        nums[n-1]++;
        return nums;
    }

    for(int i = n-1; i >=0; i--) {
        if(nums[0]==9 && i==0) {
            nums[0]=0;
            nums.insert(nums.begin(), 1);
            return nums;
        }
        else if(nums[i] < 9) {
            nums[i]++;
            return nums;
        }
        else if(nums[i] == 9) {
            nums[i] = 0;
        }
    }
    return nums;
}
int main(){
    vector<int>nums = {9,9};
    int n = nums.size();
    PlusOne(nums, n);

    for(int x : nums) {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}

