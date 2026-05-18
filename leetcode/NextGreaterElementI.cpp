#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    vector<int>nums1 = {2,4};
    vector<int>nums2 = {1,2,3,4};
    vector<int>ans;

    unordered_map<int, int>mp;

    for(int i = 0; i < nums2.size(); i++) {
        for(int j = i; j < nums2.size(); j++) {
            if(nums2[i] < nums2[j]) {
                mp[nums2[i]] = nums2[j];
                break;
            }
        }
        if(mp[nums2[i]]==0) {
            mp[nums2[i]] = -1;
        }
    }

    for(int i = 0; i < nums1.size(); i++) {
        if(mp.find(nums1[i]) != mp.end()) {
            ans.push_back(mp[nums1[i]]);
        }
    }

    for(auto i : mp) {
        cout<<i.first<<" -> "<<i.second<<endl;
    }
    for(auto &i : ans) {
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}