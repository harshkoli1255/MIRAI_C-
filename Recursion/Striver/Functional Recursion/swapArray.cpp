#include<iostream>
#include<vector>
using namespace std;

void swapArr(int i, vector<int>&arr, int n) {
    if(i >= n/2) {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swapArr(i+1, arr, n);
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    swapArr(0,arr,n);

    for(auto i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}