#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {10, 10};
    int n = nums.size();
    
    for(int i = 1; i < n-1; i++) {
        int sum = 0;
        int curr = nums[i];
        for(int j = i-1; j >= 0; j--) {
            sum += nums[j];
        }
        if(curr == sum) {
            cout<<"YES"<<endl;
            break;
        }
        else {
            cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}    