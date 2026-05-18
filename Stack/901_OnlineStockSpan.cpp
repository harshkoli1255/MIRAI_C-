#include<iostream>
using namespace std;

int main(){
    vector<int>nums = {100, 80, 60, 70, 60, 75, 85};
    stack<pair<int, int>>st;
    for(int i = 0; i < nums.size(); i++) {
        int span = 1;
        while(!st.empty() && st.top().first <= nums[i]) {
            span = span + st.top().second;
            st.pop();
        }
        st.push({nums[i], span});
        cout<<span<<" ";
    }
    cout<<endl;
    return 0;
}