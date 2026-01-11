#include<iostream>
using namespace std;

int binarySearch(vector<int>nums, int tar ,int st, int end) {
    if(st <= end) {
        int mid = st+(end-st)/2;

        if(nums[mid] == tar) {
            return mid;
        }

        if(nums[mid] <= tar) {
            return binarySearch(nums, tar, mid+1, end);
        }
        else {
            return binarySearch(nums, tar, st, mid-1);
        }
    }
    return -1;
}
int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    int st = 0;
    int end = nums.size()-1;

    cout<<binarySearch(nums,4,st,end)<<endl;

    return 0;
}