#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums {2, 1, 5, 6, 2, 3};
    int n = nums.size();

    vector<int>nse(n);
    vector<int>pse(n);
    stack<int>st;
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && nums[st.top()] >=nums[i]) {
            st.pop();
        }
        if(st.empty()) {
            nse[i] = n;
        }
        else {
            nse[i] = st.top(); 
        }
        st.push(i);
    }

    while(!st.empty()) {
        st.pop();
    }
    
    for(int i = 0; i < n; i++) {
        while(!st.empty() && nums[st.top()] >= nums[i]) {
            st.pop();
        }
        if(st.empty()) {
            pse[i] = -1;
        }
        else {
            pse[i] = st.top();
        }
        st.push(i);
    }

    int maxArea = 0;
    for(int i = 0; i < n; i++) {
        int w = nse[i] - pse[i] - 1;
        int currArea = nums[i] * w;
        maxArea = max(maxArea, currArea);
    }
    cout<<maxArea<<endl;
    return 0;
}