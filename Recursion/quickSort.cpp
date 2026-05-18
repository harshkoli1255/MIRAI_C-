#include<iostream>
using namespace std;

int findPivot(vector<int>&nums, int low, int high) {
    int i = low;
    int j = high;
    // 4, 3, 2, 1, 4, 5, 7, 8, 6, 9, 5, 6, 11
    while(i < j) {
        while(nums[i] <=  nums[low] && i <= high) {
            i++;
        }
        while(nums[j] > nums[low] && j >= low) {
            j--;
        }
        if(i < j) {
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[j], nums[low]);
    
    return j;
}

void quickSort(vector<int>&nums, int low, int high) {
    if(low <= high) {
        int pivot = findPivot(nums, low, high);
        quickSort(nums, low, pivot-1);
        quickSort(nums, pivot+1, high);
    }
    else {
        return;
    }
}

int main(){
    vector<int>nums = {4, 3, 2, 1, 4, 5, 7, 8, 6, 9, 5, 6, 11};
    int n = nums.size();
    
    quickSort(nums, n-1, n-1);

    for(auto &i : nums) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}