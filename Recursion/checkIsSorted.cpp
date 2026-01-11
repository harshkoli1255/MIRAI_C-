#include<iostream>
using namespace std;

bool isSorted(vector<int>arr, int i) {
    
    if(i == arr.size() - 1) {
        return true;
    }

    if(arr[i] > arr[i+1]) {
        return false;
    }

    return isSorted(arr, i+1);
}

bool isSorted2(vector<int>arr, int i) {
    
    if(i == 0) {
        return true;
    }

    if(arr[i-1] > arr[i]) {
        return false;
    }

    return isSorted2(arr,i);
}

int main(){

    vector<int>arr = {1, 2, 8, 4, 5};
    // cout<<boolalpha<<isSorted(arr,0)<<endl;
    cout<<boolalpha<<isSorted2(arr,0)<<endl;
    
    return 0;
}