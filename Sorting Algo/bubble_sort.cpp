#include<iostream>
using namespace std;

void bubble_sort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
}

// Optimised Approach

void optimised_bubble_sort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n-1; i++) {
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) { // array is already sorted
            return;
        }
    }
}

void printArr(vector<int>arr) {
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {3, 1, 5, 2, 8, 9};
    int size = arr.size();
    // bubble_sort(arr);
    optimised_bubble_sort(arr);
    printArr(arr);
    
    return 0;
}