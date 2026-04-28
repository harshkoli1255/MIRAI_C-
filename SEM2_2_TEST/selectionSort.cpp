#include<iostream>
using namespace std;

void selectionSort(vector<int>&nums, int n) {
    for(int i = 0; i < n; i++) {
        int sI = i;
        for(int j = i+1; j < n; j++) {
            if(nums[j] < nums[sI]) {
                sI = j;
            }
        }
        swap(nums[i], nums[sI]);
    }
}

void printArr(vector<int>&nums, int n) {
    for(auto &i : nums) {
        cout<<i<<" ";
    }
    cout<<endl;
}

void bubbleSort(vector<int>&nums, int n) {
    for(int i = n-1; i >= 1; i--) {
        for(int j = 0; j <= i-1; j++) {
            if(nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

int main(){
    vector<int>nums = {13, 22, 24, 27, 9, 1, 7, 5, 12};
    int n = nums.size();

    bubbleSort(nums, n);

    printArr(nums, n);

    return 0;
}