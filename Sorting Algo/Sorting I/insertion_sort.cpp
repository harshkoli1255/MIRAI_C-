#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void insertion_sort(vector<int>&arr, int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while(prev >=0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr; // placing the crr element in its correct position
    }
}

void printArr(vector<int>arr, int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void insertion_sort_striver(vector<int>&nums, int n) {
    for(int i = 0; i < n; i++) {
        int j = i; 
        while(j > 0 && nums[j-1] > nums[j]) {
            swap(nums[j-1], nums[j]);
            j--;
        }
    }
}

int main(){
    vector<int>arr = {4, 1, 5, 2, 3, 7 , 8, 0};
    int n = arr.size();
    // insertion_sort(arr, n);
    insertion_sort_striver(arr, n);
    printArr(arr, n);
    return 0;
}