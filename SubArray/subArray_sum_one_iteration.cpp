#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {7, 7, 23, 84, 3, 79};

    int n = nums.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans += (i + 1) * (n - i)*nums[i];
    }
    cout<<ans<<endl;
    return 0;
}
