#include<iostream>
using namespace std;
int main(){
    vector<int>nums = {9, 6, 4, 3, 1, 3, 5, 10};
    int n = nums.size();
    vector<int>ans(n); 

    int i = 0;
    int j = n-1;
    int idx = n-1;
    while(i<=j) {
        if(nums[j] > nums[i]) {
            ans[idx] = nums[j];
            j--;
            idx--;
        }
        else{
            ans[idx] = nums[i];
            idx--;
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}