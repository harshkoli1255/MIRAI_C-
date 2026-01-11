#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {1, 2, 3, 4, 5};
    int n = nums.size();
    vector<int>ans(n);

    int q;
    cin>>q;

    for(int k = 0; k < q; k++) {
        int x;
        cin>>x;
        if(x==0) {
            for(int i = 0; i < n; i++) {
                ans[i] = 2*ans[i];
            }
        }
        else {
            for(int i = 0; i < n; i++) {
                int behind = (i-x+n)%n;
                ans[i] = nums[i] + nums[behind];
            }    
        }
        nums = ans;
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += ans[i];
    }
    // int ope2 = pow(10,9)+7;
    long long ope2 = 1000000007;

    cout<<sum%ope2<<endl;
    return 0;
}