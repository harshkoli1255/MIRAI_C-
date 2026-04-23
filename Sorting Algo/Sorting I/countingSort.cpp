#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>nums = {9, 6, 4, 3, 1, 3, 5, 10};
    int n = nums.size();
    
    int largest = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        largest = max(largest, nums[i]);
    }

    vector<int>count(largest+1);
    for(int i = 0; i < n; i++) {
        count[nums[i]]++;
    }

    // sort
    int j = 0;
    for(int i = 0; i <= count.size(); i++) {
        while(count[i] > 0) {
            nums[j] = i;
            j++;
            count[i]--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}