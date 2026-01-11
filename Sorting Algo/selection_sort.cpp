#include<iostream>
using namespace std;

void selection_sort(vector<int>&arr) {
    int n = arr.size();

    for (int i = 0; i < n-1; i++) {
        int smallestIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[smallestIdx] > arr[j]) {
                smallestIdx = j;
            } 
        }
        swap(arr[i], arr[smallestIdx]);
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

    selection_sort(arr);
    printArr(arr);

    return 0;
}