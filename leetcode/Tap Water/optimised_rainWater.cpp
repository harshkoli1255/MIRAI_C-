#include<iostream>
using namespace std;
int main(){
    // vector<int> height = {4, 2, 0, 3, 2, 5};
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    int n = height.size();

    int ans = 0;
    int l = 0;
    int r = n-1;

    int lmax = 0;
    int rmax = 0;

    int maxArea = 0;
    while(l < r) {
        lmax = max(lmax, height[l]);
        rmax = max(rmax, height[r]);

        maxArea = max(maxArea,(r-l)*min(lmax,rmax));

        if(lmax < rmax) {
            // ans += lmax - height[l];
            l++;
        } 
        else {
            // ans += rmax - height[r];
            r--;
        }
    }

    // cout<<ans<<endl;
    cout<<maxArea<<endl;
    return 0;
}