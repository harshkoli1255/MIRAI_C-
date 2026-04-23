#include<iostream>
#include<vector>
using namespace std;

int lastOcc (int target, vector<int>&arr, int n, int i) {
    if(target == arr[i]) {
        return i;
    }
    if(i < 0) return -1;
    return lastOcc(target, arr, n, i-1);
}

int main(){
    vector<int>arr = {5, 5, 5, 5};
    int n = arr.size();
    int target = 5;

    int ans = lastOcc (target, arr, n, n-1);
    cout<<ans<<endl;

    return 0;
}