#include<iostream>
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


int main(){
    vector<int>arr = {4, 1, 5, 2, 3};
    int n = arr.size();
    insertion_sort(arr, n);
    printArr(arr, n);
return 0;
}