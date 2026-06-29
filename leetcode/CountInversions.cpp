#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>&nums, int low, int mid, int high) {
    int left = low;
    int right = mid+1;
    int n = nums.size();
    int invertionCount = 0;
    vector<int>temp;
    while(left <= mid && right <= high) {
        if(nums[left] < nums[right]) {
            temp.push_back(nums[left]);
            left++;
        }
        // right is small
        else {
            invertionCount += (mid-low+1);
            temp.push_back(nums[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(nums[right]);
        right++;
    }

    for(int i = 0; i < temp.size(); i++) {
        nums[i+low] = temp[i];
    }
}

void mergeSort(vector<int>&nums, int low, int high) {
    if(low >= high) {
        return;
    }
    int mid = low + (high-low)/2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);
}

int main(){
    vector<int>nums = {2, 3, 7, 1, 3, 5};
    int n = nums.size();

    mergeSort(nums, 0, n-1);

    for(auto &i : nums) {
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}