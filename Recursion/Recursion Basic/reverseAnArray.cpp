#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reverseArr(vector<int>&arr, int i, int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr(arr, i+1, n);
}

int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    int n = nums.size();

    reverseArr(nums, 0, n);

    for(auto &i : nums) {
        cout<<i<<" ";
    } cout<<endl;
    return 0;
}