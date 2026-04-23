#include<iostream>
#include<vector>
using namespace std;

int firstOcc (int target, vector<int>&arr, int n, int i) {
    if(target == arr[i]) {
        return i;
    }
    if(i > n) return -1;
    return firstOcc(target, arr, n, i+1);
}

int main(){
    vector<int>arr = {5, 3, 0, 8, 11, 2, 9, 10, 4, 5};
    int n = arr.size();
    int target = 12;

    int ans = firstOcc (target, arr, n, 0);
    cout<<ans<<endl;

    return 0;
}