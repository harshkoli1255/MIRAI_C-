#include<iostream>
using namespace std;

int findPivot(vector<int>&nums, int n, int low, int high) {
    int idx = -1;
    int pivot = nums[high];
    for(int j = 0; j < high; j++) {
        if(nums[j] <= nums[high]) {
            idx++;
            swap(nums[idx], nums[j]);
        }
    }
    idx++;
    swap(nums[idx], nums[high]);
    return idx;
}

void quickSort(vector<int>&nums, int n, int low, int high) {
    if(low < high) {
        int pivotIdx = findPivot(nums, n, low, high);
        quickSort(nums, n, low, pivotIdx-1);
        quickSort(nums, n, pivotIdx+1, high);
    }
}
int main(){
    vector<int>nums = {5, 2, 6, 4, 1, 3};
    int n = nums.size();

    quickSort(nums, n, 0, n-1);

    for(auto &i : nums) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}