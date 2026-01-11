#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>nums(n);
        
        for(int i = 0; i < n;i++) {
            cin>>nums[i];
        }

        bool isSort = true;
    
        for(int i = 1; i < n; i++) {
            if(nums[i] < nums[i-1]) {
                isSort = false;
                break;
            }
        }
        
        if(isSort == true || k>=2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}