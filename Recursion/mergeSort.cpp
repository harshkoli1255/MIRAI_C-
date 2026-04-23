#include<iostream>
using namespace std;

void merge(vector<int>&nums, int low, int mid, int high) {
    vector<int>temp;

    int left = low;
    int right = mid+1;

    while (left<=mid && right<=high) {
        if(nums[left] < nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } 
        else {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left<=mid) {
        temp.push_back(nums[left]);
        left++;        
    }
    while (right<=high) {
        temp.push_back(nums[high]);
        right++;
    }

    for(int i = 0; i < temp.size(); i++) {
        nums[i+low] = temp[i];
    }
}

void mergeSort(vector<int>&nums, int low, int high) {
    if(low == high) {
        return;
    }
    int mid = low + (high-low)/2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);
    merge(nums, low, mid, high);
}
int main(){
    vector<int>nums = {9, 2, 4, 5, 1, 2 , 8, 7, 3};
    int n = nums.size();

    mergeSort(nums, 0, n-1);

    for(auto &i : nums) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}