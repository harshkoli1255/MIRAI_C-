#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int>nums(n);

        for(int i = 0; i < n; i++) {
            cin>>nums[i];
        }
    
        int operation = 0;
    
        for(int i = 1; i < n; i++) {
            if((nums[i]%2==0 && nums[i-1]%2==0) || (nums[i]%2!=0 && nums[i-1]%2!=0)) {
                operation++;
            }
        }
    
        cout<<operation<<endl;
    }
    return 0;
}