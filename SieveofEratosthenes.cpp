#include<iostream>
#include<vector>
using namespace std;

int prime(int n) {
    vector<bool>nums(n+1, true);
    for(int i = 2; i*i <= n; i++) {
        if(nums[i]) {
            for(int j = i*i; j <= n; j+=i) {
                nums[j] = false;
            }
        }
    }
    int count = 0;
    for(int i = 2; i < n; i++) {
        if(nums[i]) {
            count++;
        }
    }
    return count;
}
int main(){
    int n = 3;
    int ans = prime(n);
    cout<<ans<<endl;
    return 0;
}